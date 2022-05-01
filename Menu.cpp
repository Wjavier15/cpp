#include <iostream>
#include "MENU.h"

using namespace std;

extern void producto (int opcion);
extern imprimirFactura();

void MENU(){
	
	
	int opcion = 0;
	
	while (true)
	{
		system("cls");
		cout << " ************* ";
	    cout << " MENU ";
        cout << " *************";
		cout << endl;
		cout << endl;
		
		
		cout << " 1 - Churros " << endl;
		cout << " 2 - Pan " << endl;
		cout << " 3 - Bebidas " << endl;
		cout << " 4 - Imprimir factura " << endl;
		cout << " 0 - Salir " << endl;
		
	
	    cout << endl;
		cout << " Ingrese una opcion: ";
		cin >> opcion;
		
		if (opcion == 0)
		{
		
		   break;
		
		}	
	    if (opcion == 4){
	    	
	    	imprimirFactura();
	    	
		}else{
			
		  producto(opcion);	
		}
	  producto(opcion);
		
	}
	
}
