#include <iostream>

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
	
	
		cout << " Bebidas Calientes " << endl;
		cout << " ******** "<< endl;
	   	cout << " 1 - Capuccino " << endl;
		cout << " 2 - Expresso " << endl;
		cout << " 3 - Granita " << endl;
		cout << endl;
		
		cout << " Ingrese una opcion ";
		cin >> opcionProducto;
		
		   switch (opcionProducto)
		   {
		     case 1:	
		   	    agregarProducto ("1 - Capuccino - L 40.00", 1 , 40);
		   	    break;
		   	 case 2:	
		   	    agregarProducto ("1 - Expresso - L 30.00", 1 , 30);
		   	    break;
		     case 3:
		     	agregarProducto ("1 - granita - L 40.00", 1 , 40);
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
