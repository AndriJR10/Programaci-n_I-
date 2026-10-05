#include <iostream>
using namespace std;
 
int main()
{
int n, pasos = 0;
 
cout << "Introduzca un numero: ";
cin >> n;
 
while (n != 1)
{
if (n % 2 == 0)
{
n = n / 2;
}
else
{
n = n * 3 + 1;
}
 
pasos++;
}
 
cout << "Cantidad de pasos: " << pasos << endl;
 
return 0;
}

