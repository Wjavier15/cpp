#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
  float n1, n2;
  char op;
  double r;
  cout<<"Ingrese primer Nro: ";
  cin>>n1;
  cout<<"Ingrese operador (+,-,*,/,#): ";
  cin>>op;
  cout<<"Ingrese segundo Nro: ";
  cin>>n2;
  switch(op){case '+': r=n1+n2; break;
             case '-': r=n1-n2; break;
             case '*': r=n1*n2; break;
             case '/': r=n1/n2; break;
             case '#': r=pow(n1,n2); break;
             default: cout<<"Operador no definido";
             exit(1);
             }
  cout<<"El resultado es: "<<r;

getch();
}
