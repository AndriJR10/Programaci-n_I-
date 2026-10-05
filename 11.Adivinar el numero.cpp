#include <iostream>
using namespace std;
 
int main()
{
int secreto = 42;
int intento;
int cantidadIntentos = 0;
 
do
{
cout << "Intento: ";
cin >> intento;
 
cantidadIntentos++;
 
if (intento < secreto)
{
cout << "Mayor" << endl;
}
else if (intento > secreto)
{
cout << "Menor" << endl;
}
 
} while (intento != secreto);
 
cout << "¡Correcto! Lo lograste en "
<< cantidadIntentos
<< " intentos." << endl;
 
return 0;
}
