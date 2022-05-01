#include <iostream>
#include "Factura.h"

using namespace std;

extern void agregarProducto (string descripcion, int cantidad, double precio);


 void producto(int opcion)
 {
	
	
	system("cls");
	
	int opcionProducto = 0;
	
	
	switch (opcion)
	{
		
	case 1:	
	{
	
	
		cout << " Churros " << endl;
		cout << " ******** "<< endl;
	   	cout << " 1 - Dorito " << endl;
		cout << " 2 - Zambo " << endl;
		cout << " 3 - Taqueritos " << endl;
		cout << endl;
		
		cout << " Ingrese una opcion ";
		cin >> opcionProducto;
		
		   switch (opcionProducto)
		   {
		     case 1:	
		   	    agregarProducto ("1 - Dorito - L 10.00", 1 , 10);
		   	    break;
		   	 case 2:	
		   	    agregarProducto ("1 - Zambo - L 10.00", 1 , 10);
		   	    break;
		     case 3:
		     	agregarProducto ("1 - Taqueritos - L 10.00", 1 , 10);
                break;
			 default:
		        {
				  cout << " Opcion no valida ";
			     return;
				 break;
		        }
			}  
	
	    cout << endl;
		cout << " Producto agregado " << endl << endl;
		system("pause");
	
		break; 
	}		
	case 2:	
	{
		cout << " Pan " << endl;
		cout << " ******** "<< endl;
		cout << " 1 - Semita " << endl;
		cout << " 2 - Mantecada " << endl;
		cout << " 3 - Dona " << endl;
		cout << endl;
		
		cout << " Ingrese una opcion ";
		cin >> opcionProducto;
		
		switch (opcionProducto)
		{
		     case 1:	
		   	    agregarProducto ("1 - Semita - L 5.00", 1 , 5);
		   	    break;
		   	 case 2:	
		   	    agregarProducto ("1 - Mantecada - L 5.00", 1 , 5);
		   	    break;
		     case 3:
		     	agregarProducto ("1 - Dona - L 10.00", 1 , 10);
                break;
			    default:
		        {
				 cout << " Opcion no valida ";
			     return;
				 break;
		        }
		}  

        
        cout << endl;
		cout << " Producto agregado " << endl << endl;
		system("pause");
		
		break;
	}		
    case 3:	
	{
		cout << " Bebidas " << endl;
		cout << " ******** "<< endl;
		cout << " 1 - Pepsi " << endl;
		cout << " 2 - Coca  " << endl;
		cout << " 3 - Lipton " << endl;
		cout << endl;
		
		
		cout << " Ingrese una opcion ";
		cin >> opcionProducto;
		
		switch (opcionProducto)
	   {
		     case 1:	
		   	    agregarProducto ("1 - Pepsi - L 20.00", 1 , 20);
		   	    break;
		   	 case 2:	
		   	    agregarProducto ("1 - Coca - L 20.00", 1 , 20);
		   	    break;
		     case 3:
		     	agregarProducto ("1 - Lipton - L 25.00", 1 , 25);
                break;
			    default:
		        {
				  cout << " Opcion no valida ";
			     return;
				 break;
		        }
		}  
		cout << endl;
		cout << " Producto agregado " << endl << endl;
		system("pause");
			
		break;
				
	}default:
	    break;	
		
		
	

}	

}
