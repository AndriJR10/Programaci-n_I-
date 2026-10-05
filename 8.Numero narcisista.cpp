#include <iostream>
using namespace std;
 
int main()
{
int n, copia, digito, suma = 0;
 
cout << "Introduzca un numero de tres digitos: ";
cin >> n;
 
copia = n;
 
while (n > 0)
{
digito = n % 10;
suma = suma + digito * digito * digito;
n = n / 10;
}
 
if (suma == copia)
{
cout << "Es de Armstrong" << endl;
}
else
{
cout << "No es de Armstrong" << endl;
}
 
return 0;
}
