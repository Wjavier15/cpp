#include "iostream"

using namespace std;
int main()
{
   cout << "Ingrese la Opci�n a ejecutar: ";
int opcion = 0;
cin >> opcion;

switch(opcion)
{
    case 1: cout << "Usted ha seleccionado la opci�n 1";
    break;
    case 2: cout << "Usted ha seleccionado la opci�n 2";
    break;
    case 3: cout << "Usted ha seleccionado la opci�n 3";
    break;
    default: cout << "Usted ha ingresado una opci�n incorrecta";
}
    return 0;
}
