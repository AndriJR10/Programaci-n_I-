#include <iostream>
using namespace std;
 
int main()
{
int a, b, resto;
 
cout << "Introduzca el primer numero: ";
cin >> a;
 
cout << "Introduzca el segundo numero: ";
cin >> b;
 
while (b != 0)
{
resto = a % b;
a = b;
b = resto;
}
 
cout << "El MCD es: " << a << endl;
 
return 0;
}
