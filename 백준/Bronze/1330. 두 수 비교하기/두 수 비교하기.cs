string[] s = Console.ReadLine().Split();
int a = int.Parse(s[0]);
int b = int.Parse(s[1]);

string answer = a > b ? ">" : a < b ? "<" : "==";

Console.WriteLine(answer);