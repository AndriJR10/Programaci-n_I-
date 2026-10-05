#include <iostream>
using namespace std;
 
int main()
{
int n, suma = 0;
 
cout << "Introduzca un numero: ";
cin >> n;
 
for(int i = 1; i < n; i++)
{
if(n % i == 0)
{
suma = suma + i;
}
}
 
if(suma == n)
{
cout << "Es perfecto" << endl;
}
else
{
cout << "No es perfecto" << endl;
}
 
return 0;
}
