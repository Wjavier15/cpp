#include <iostream>
using namespace std;
int bisiesto(int);   //declaraci�n o prototipo de la funci�n
int main()
{
   int anio;
   cout<<"Introduce a"<<(char)164<<"o: "; //164 ascii de �
   cin >> anio;
   if(bisiesto(anio))  //llamada a la funci�n
      cout << "Bisiesto" << endl;
   else
      cout << "No es bisiesto" << endl;
   system("pause"); 
}
int bisiesto(int a)   //definici�n de la funci�n    
{
    if(a%4==0 and a%100!=0 or a%400==0)
        return 1;
    else
        return 0;
}
