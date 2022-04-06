#include <cstdlib>   // srand(), rand()
#include <ctime>     // time()
#include <iostream>
 
using namespace std;
 
int main()
{
    cout << "Adivine el numero\n";
    cout << "Escriba un numero entero de 0 a 100\n";
 
    srand(static_cast<unsigned>(time(NULL)));
    int pensado = rand() % 101;
 
    int dicho;
    while (cin >> dicho)
    {
        if (pensado == dicho)
        {
            cout << "Muy bien has adivinado el numero\n";
            break;
        }
        else if (pensado > dicho)
        {
            cout << "El numero es mayor\n";
        }
        else if (pensado < dicho)
        {
            cout << "El numero es menor\n";
        }
    }
 
    return 0;
}
