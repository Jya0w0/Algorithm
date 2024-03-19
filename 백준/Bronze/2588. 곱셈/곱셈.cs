int num1 = int.Parse(Console.ReadLine());
int num2 = int.Parse(Console.ReadLine());
int a = num2 / 100;
num2 = num2 % 100;
int b = num2 / 10;
num2 = num2 % 10;
int c = num2;

int A = num1 * a;
int B = num1 * b;
int C = num1 * c;
int D = (A * 100) + (B * 10) + C;

Console.WriteLine(C);
Console.WriteLine(B);
Console.WriteLine(A);
Console.WriteLine(D);