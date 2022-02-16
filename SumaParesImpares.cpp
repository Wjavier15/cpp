#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0,p=0,i=0;
    cout<<"ingrese un numero: ";cin>>a;
    cout<<"ingrese otro numero: ";cin>>b;
    while(a<=b)
    {
        if(a%2==0)
        {p=p+a; a=a+1;}
        else
        {i=i+a; a=a+1;}
    }
    cout<<"suma de pares: "<<p<<endl;
    cout<<"suma de impares: "<<i<<endl;
    cin.ignore(); 
	return 0;
}
