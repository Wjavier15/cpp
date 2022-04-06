#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

main() 
{
    int edad;
    char nombre[50];

    cout<<"ingrese nombre \n";
    cin>>nombre;

    gets(nombre);
    cout<<"ingrese edad \n";
    cin>>edad;

    if (edad>=0&&edad<=9){ cout<<nombre<<" su piso es 0 \n"; }
    if (edad>9&&edad<=19){ cout<<nombre<<" su piso es 1 \n"; }
    if (edad>19&&edad<=29){ cout<<nombre<<" su piso es 2 \n"; }
    if (edad>29&&edad<=39){ cout<<nombre<<" su piso es 3 \n"; }
    if (edad>39&&edad<=49){ cout<<nombre<<" su piso es 4 \n"; }
    if (edad>49&&edad<=59){ cout<<nombre<<" su piso es 5 \n"; }
    if (edad>59&&edad<=69){ cout<<nombre<<" su piso es 6 \n"; }
    if (edad>69&&edad<=79){ cout<<nombre<<" su piso es 7 \n"; }     
    getch();
}
