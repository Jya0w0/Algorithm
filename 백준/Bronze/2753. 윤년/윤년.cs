int n = int.Parse(Console.ReadLine());
n = n % 4 == 0 && n % 100 != 0 || n % 400 == 0 ? 1 : 0;
Console.WriteLine(n);