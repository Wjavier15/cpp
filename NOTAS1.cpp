#include <iostream>
using namespace std;
 
//Programa Principal
int main()
{
  int promedio = 0, nota1, nota2, nota3, i, n, notafinal;
cout<<"Ingrese cantidad de alumnos:";
cin>>n;
//Bucle para ingreso de Notas, en base a 3 Unidades
for (i=1;i<=n;i++)
    {cout<<"\nIngrese nota I Unidad: ";
    cin>>nota1;
    cout<<"Ingrese nota II Unidad: ";
    cin>>nota2;
    cout<<"Ingrese nota III Unidad:";
    cin>>nota3;
    notafinal = promedio * nota1,nota2,nota3;
    promedio = (nota1+nota2+nota3)/3;
    //Condicion si el alumno supera el 64 (Nota mínima)
    if (notafinal > 64 )
        {cout<<"El alumno ha aprobado la materia.\n";
        }
    else
        cout<<"El alumno ha desaprobado la materia.\n";
    }
}
