#include <iostream>
using namespace std;
 
int main()
{
int n, copia, invertido = 0, digito;
 
cout << "Introduzca un numero: ";
cin >> n;
 
copia = n;
 
while (n > 0)
{
digito = n % 10;
invertido = invertido * 10 + digito;
n = n / 10;
}
 
if (copia == invertido)
{
cout << "Es capicua";
}
else
{
cout << "No es capicua";
}
 
return 0;
}
