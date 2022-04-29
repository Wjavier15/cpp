#include<iostream>
#include<string>
using namespace std;
int main()
{
	////////INICIO DEL PROGRAMA//////
	cout <<" CENSO DE MATRICULA " <<endl; 
    cout <<endl;
    cout <<" PROGRAMADOR : Javier Aguilar " <<endl;
    cout <<endl;
    cout <<" Fecha 29/04/2022" <<endl;
    cout <<endl;
    
    //DECLARACION DE VARIABLES
    int nclasdisp, ncred, ncredmat=0, ncursos=0,ciclo;
    char i;
    string nom;
    cout <<"Nombre del alumno: ";cin>>nom;
    IngreseCiclo:
    cout <<"Ingrese periodo: ";cin>>ciclo;
    
    //DESCRIPCION DE LAS SENTECIAS Y CICLOS 
    switch(ciclo)
    {
        case 1: case 4: case 7:
        {
            nclasdisp=7;
            cout <<"Clases disponibles: " << nclasdisp << endl;
             
            do
            {
                IngreseClases:
                do
                {
                    cout <<"Ingrese la cantidad de clases del periodo: ";cin>>ncred;
                    if(ncred<=0||ncred>nclasdisp)
                    {
                         
                        cout <<"La cantidad de clases debe ser mas de 0 y menor-igual que el total de clases disponibles" << endl;
                        sn:
                        cout <<"Desea ingresar un valor valido (Si:S/s) (No:N/n): ";cin>>i;
                        decide:
                        switch(i)
                        {
                        case 's':case'S': goto IngreseClases;
                        case 'n':case'N':   {if(ncredmat>=1) goto notificar;
                                            else exit(0);
                                            }break;
                        default: cout<<"Invalido\n";goto sn;
                        }
                    }
                    nclasdisp=nclasdisp-ncred;
                    
                     //CONTADOR
                    cout <<"Clases Restante: " <<nclasdisp <<endl;
                    ncredmat=ncredmat+ncred;
                    ncursos++;
                }while(ncredmat<1);
                 
                while(nclasdisp>0)
                {       
                cout <<"Desea matricularse en algun curso mas (Si:S/s) (No:N/n): ";cin>>i;
                goto decide;
                }
            }while(ncred<0&&ncred>nclasdisp);
        }break;
        case 2: case 3: case 8:
            {
                nclasdisp=7;
                cout <<"Clases disponibles: " << nclasdisp << endl;
                goto IngreseClases;
 
            }break;
        case 5: case 6: case 9: case 10:
            {
                nclasdisp=8;
                cout <<"Clases disponibles: " << nclasdisp << endl;
                goto IngreseClases;
 
            }break;
        default:
                {
                    cout <<"Desea ingresar un valor valido s/S n/N: ";cin>>i;
                    switch(i)
                    {
                        case 's': case 'S':goto IngreseCiclo;
                        case 'N': case 'n':exit(0);
                        default: cout <<"respuesta invalida" << endl;
                    }
                }
     
    }
    notificar:
    cout <<"\n\nREPORTE\n\n";
    cout <<"Nombre del alumno: " << nom << endl;
    cout <<"Periodo del alumno: " << ciclo << endl;
    cout <<"Total de clases matriculados: " << ncredmat << endl;
    cout <<"Total de clases disponibles: " << nclasdisp <<endl;
    cout <<"Total de cursos matriculados: " << ncursos << endl;
 
return 0;
}
