#include <iostream>
using namespace std;

float promedio(float nota1,float nota2, float nota3)
	{float Promedio;
	Promedio = (nota1+nota2+nota3)/3;
	return (Promedio);
	}

int main()
{float nota1, nota2, nota3, i, n, notafinal;
cout<<"Ingrese cantidad de alumnos:";
cin>>n;

for (i=1;i<=n;i++)
	{cout<<"\nIngrese nota I Unidad: ";
	cin>>nota1;
	cout<<"Ingrese nota II Unidad: ";
	cin>>nota2;
	cout<<"Ingrese nota III Unidad:";
	cin>>nota3;
	notafinal = promedio(nota1,nota2,nota3);

	if (notafinal >= 10)
		{cout<<"El alumno ha aprobado la materia."<<notafinal;
	}else{
		cout<<"El alumno ha desaprobado la materia."<< notafinal;
	}
	}
}
