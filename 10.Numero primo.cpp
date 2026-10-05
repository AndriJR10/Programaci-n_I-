#include <iostream>
using namespace std;
 
int main()
{
int n;
bool primo = true;
 
cout << "Introduzca un numero: ";
cin >> n;
 
for(int i = 2; i * i <= n; i++)
{
if(n % i == 0)
{
primo = false;
}
}
 
if(primo)
{
cout << "Es primo" << endl;
}
else
{
cout << "No es primo" << endl;
}
 
return 0;
}
