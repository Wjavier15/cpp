#include <iostream>

using namespace std;
 
int main(int argc, char const *argv[])
{
	//Datos de entrada
	double subtotal = 0;
	double total = 0;
	double impuesto = 0.15;
	int descuento = 0;
	double calculoDescuento = 0;
	double calculoImpuesto = 0;
	string estaexenta;
	
	cout << "Ingrese el Subtotal: ";
	cin >> subtotal;
	
	cout << "Ingrese el descuento (0, 10, 15, 20) ";
	cin >> descuento;
	
	cout << "Es factura exenta? Escriba S o N ";
	cin >> estaexenta;
	calculoDescuento = (subtotal * descuento) / 100;
		if (estaexenta == "s" || estaexenta == "S")
	{
		
	}
	
	else{
		calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
	}


	
	total = subtotal - calculoDescuento + calculoImpuesto;
	
	

	cout << endl;
	cout << "El total a Pagar es: "<< total;
	return 0;
}
