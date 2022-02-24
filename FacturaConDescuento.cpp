#ifdef __MSDOS__
    #include <iostream.h>
    #include <stdlib.h>
#else
    #include <iostream>
    #include <cstdlib>
    using namespace std;
#endif

int main (void)
{
    float IVA, alicuota_del_IVA, cantidad, descuento, monto_base;
    float monto_total, precio;
    char nombre_del_producto[63];
    cout << "Ingresa el nombre del producto: ";
    cin.get(nombre_del_producto, sizeof (nombre_del_producto), '\n');
    cin.get();
    cout << "Ingresa el valor de alicuota del IVA: ";
    cin >> alicuota_del_IVA;
    cin.get();
    cout << "Ingresa el valor de cantidad: ";
    cin >> cantidad;
    cin.get();
    cout << "Ingresa el valor de precio: ";
    cin >> precio;
    cin.get();
    monto_base=precio*cantidad;
    descuento=0;
    if(monto_base==10000)
        descuento=monto_base*0.13;
    if(monto_base>30000)
        descuento=monto_base*0.175;
    IVA=(monto_base-descuento)*alicuota_del_IVA/100;
    monto_total=monto_base-descuento+IVA;
    cout << "Nombre del producto: " << nombre_del_producto << endl;
    cout << "Valor de IVA: " << IVA << endl;
    cout << "Valor de descuento: " << descuento << endl;
    cout << "Valor de monto base: " << monto_base << endl;
    cout << "Valor de monto total: " << monto_total << endl;
    cout << endl;
    system ("pause");
    return EXIT_SUCCESS;
}
