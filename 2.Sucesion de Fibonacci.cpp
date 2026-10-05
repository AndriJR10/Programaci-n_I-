#include <iostream>
using namespace std;
 
int main()
{
int n;
int a = 0;// Guarda el termino actual de fibonacci
int b = 1;
int c;
 
cout << "Introduzca la cantidad de terminos: ";
cin >> n;
 
for(int i = 1; i <= n; i++)
{
cout << a << " ";
 
c = a + b;
a = b;
b = c;
}
 
return 0;
}
