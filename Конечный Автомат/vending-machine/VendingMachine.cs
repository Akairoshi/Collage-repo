
namespace vending_machine
{
    // Класс, представляющий автомат по продаже товаров
    public class VendingMachine
    {
        private VendingState _currentVendingState = VendingState.Idle;
        public VendingState CurrentVendingState => _currentVendingState;

        private decimal _userBalance = 0.0m;
        private string _selectedProduct = string.Empty;

        private Dictionary<string, Product> _products;
        public Dictionary<string, Product> Products
        {
            get => _products;
            set
            {
                if (value == null)
                {
                    throw new ArgumentNullException(nameof(Products), "Products cannot be null.");
                }
                _products = value;
            }
        }

        // Обрабатывает входящее событие и переключает состояние автомата. Принимает тип события, сумму (для InsertCoin) и название продукта (для SelectProduct).
        public void HandleVendingEvent(VendingEvent vendingVendingEvent, decimal amount = 0.0m, string productName = "")
        {
            switch (_currentVendingState)
            {
                case VendingState.Idle:
                    if (vendingVendingEvent == VendingEvent.SelectProduct)
                    {
                        if (Products.ContainsKey(productName) && Products[productName].Quantity > 0)
                        {
                            _selectedProduct = productName;
                            _currentVendingState = VendingState.WaitingForPayment;
                            Console.WriteLine($"Selected {productName}. Waiting for payment ${Products[productName].Price}...");
                        }
                        else if (!Products.ContainsKey(productName))
                        {
                            Console.WriteLine("Product not found.");
                        }
                        else
                        {
                            Console.WriteLine("Product out of stock.");
                        }
                    }
                    break;
                case VendingState.WaitingForPayment:
                    if (vendingVendingEvent == VendingEvent.InsertCoin)
                    {
                        Console.WriteLine($"Inserted ${amount}.");
                        _userBalance += amount;
                        if (_userBalance >= Products[_selectedProduct].Price)
                        {
                            _currentVendingState = VendingState.Dispensing;
                            Console.WriteLine("Sufficient balance. Dispensing product...");
                        }
                        else
                        {
                            var remainingAmount = Products[_selectedProduct].Price - _userBalance;
                            Console.WriteLine($"Insufficient balance. Pay an additional ${remainingAmount}");
                        }
                    }
                    else if (vendingVendingEvent == VendingEvent.Cancel)
                    {
                        Console.WriteLine($"Transaction cancelled. Returning ${_userBalance}");
                        Reset();
                    }
                    break;
                case VendingState.Dispensing:
                    if (vendingVendingEvent == VendingEvent.DispenseProduct)
                    {
                        var product = Products[_selectedProduct];
                        product.Quantity--;
                        _userBalance -= product.Price;
                        Console.WriteLine($"Dispensed {_selectedProduct}. Change: ${_userBalance}");
                        Reset();
                    }
                    break;
            }
        }
        private void Reset()
        {
            _userBalance = 0;
            _selectedProduct = string.Empty;
            _currentVendingState = VendingState.Idle;
        }
        public VendingMachine(Dictionary<string, Product> products)
        {
            Products = products;
        }
    }
}
