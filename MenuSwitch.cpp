#include <iostream>
using namespace std;
int main()
{
    int a, b, total;
    int seleccion;
    cout<<"Bienvenid@, este programa realizar� operaciones aritm�ticas" << endl;
    cout<<"sobre 2 cantidades que escribas" << endl << endl;
    cout<<"Escribe el primer n�mero: ";
    cin>>a;
    cout <<"Escribe el segundo n�mero: ";
    cin>>b;
    cout<<endl<<"Indica el n�mero de la operaci�n que desees realizar: " <<endl;
    cout<<"(1) Suma" << endl;
    cout<<"(2) Resta" << endl;
    cout<<"(3) Producto" << endl;
    cout<<"(4) Divisi�n Entera" << endl;
    cout<<"(5) M�dulo" << endl;
    cin>>seleccion;
    //Para realizar la operaci�n solicitada utilizamos una estructura switch
    //Intencionalmente se ha omitido el uso de break;
    switch (seleccion) {
        case 1: cout << "La suma es: " << a + b << endl;
        case 2: cout << "La resta es: " << a - b << endl;
        case 3: cout << "El producto es: " << a * b << endl;
        case 4: cout << "La divisi�n es: " << a / b << endl;
        case 5: cout << "El m�dulo es: " << a % b << endl;
        default: cout << "Opci�n no v�lida" << endl;
    } //Fin de switch
    cout<<"Gracias por utilizar este programa" << endl;
    return 0;
}
