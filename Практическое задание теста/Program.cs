class Programm
{
    public static void Main()
    {
        double a;
        double b;

        Console.WriteLine("Введите A: ");
        a = double.Parse(Console.ReadLine());

        Console.WriteLine("Введите B: ");
        b = double.Parse(Console.ReadLine());
    
        Console.WriteLine(a + b);
        Console.WriteLine(a - b);
        Console.WriteLine(a * b);
        Console.WriteLine(a / b);
    }
}