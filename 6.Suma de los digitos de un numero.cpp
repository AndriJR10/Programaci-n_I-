#include <iostream>
using namespace std;
 
int main()
{
int n, suma = 0, digito; // la variable suma acumula la suma de los digitos
 
cout << "Introduzca un numero: ";
cin >> n;
 
while (n > 0)
{
digito = n % 10;
suma = suma + digito;
n = n / 10;
}
 
cout << "La suma de los digitos es: " << suma << endl;
 
return 0;
}
