#include <iostream>
using namespace std;
 
int main()
{
int n, invertido = 0, digito;
 
cout << "Introduzca un numero: ";
cin >> n;
 
while (n > 0)
{
digito = n % 10;
invertido = invertido * 10 + digito;
n = n / 10;
}
 
cout << "Numero invertido: " << invertido << endl;
 
return 0;
}
