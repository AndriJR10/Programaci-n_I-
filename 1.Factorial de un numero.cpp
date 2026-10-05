#include <iostream>
using namespace std;
 
int main()
{
int n, resultado = 1; //la variable llamada resultado es un acumulador
 
cout << "Introduzca un numero: ";
cin >> n;
 
for(int i = 1; i <= n; i++)
{
resultado = resultado * i;
}
 
cout << "El factorial es: " << resultado << endl;
 
return 0;
}
