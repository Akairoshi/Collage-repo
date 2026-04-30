
namespace vending_machine
{
    public class Program
    {
        public static void Main(string[] args)
        {
            var vendingMachine = new VendingMachine(
                new Dictionary<string, Product>(StringComparer.OrdinalIgnoreCase){ // Ключи не чувствительные к регистру
                    { "Soda", new Product { Price = 1.50m, Quantity = 0 } },
                    { "Chips", new Product { Price = 1.00m, Quantity = 10 } },
                    { "Candy", new Product { Price = 0.75m, Quantity = 10 } } }
                );


            Console.WriteLine("Welcome to the Vending Machine!");

            // Главный цикл для обработки событий и взаимодействия с пользователем
            while (true) 
            {
                switch (vendingMachine.CurrentVendingState)
                {
                    case VendingState.Idle:
                        Console.WriteLine("\nProducts: ");
                        var keys = vendingMachine.Products.Keys.ToList();
                        for (int i = 0; i < keys.Count; i++)
                        {
                            var productInVM = vendingMachine.Products[keys[i]];
                            Console.Write($"{i + 1}. {(keys[i])}: ${productInVM.Price} (Quantity: {productInVM.Quantity})");
                            if (productInVM.Quantity == 0)
                            {
                                Console.Write(" - Out of Stock\n");
                            }
                            else
                            {
                                Console.Write("\n");
                            }
                        }
                        Console.Write("\nPlease select a product by name: ");
                        var _selectedProduct = Console.ReadLine().Trim() ?? "";
                        vendingMachine.HandleVendingEvent(VendingEvent.SelectProduct, productName: _selectedProduct);
                        break;
                    case VendingState.WaitingForPayment:
                        Console.Write("\nPlease insert coins (type 'cancel' to cancel): ");
                        var input = Console.ReadLine().Trim().Replace(".", ",") ?? "";
                        if (input.ToLower() == "cancel")
                        {
                            vendingMachine.HandleVendingEvent(VendingEvent.Cancel);
                        }
                        else if (decimal.TryParse(input, out decimal amount))
                        {
                            vendingMachine.HandleVendingEvent(VendingEvent.InsertCoin, amount);
                        }
                        else
                        {
                            Console.WriteLine("Invalid input. Please insert a valid amount or type 'cancel'.");
                        }
                        break;
                    case VendingState.Dispensing:
                        vendingMachine.HandleVendingEvent(VendingEvent.DispenseProduct);
                        break;
                }
            }
        }
    }
}