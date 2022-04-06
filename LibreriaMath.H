#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
 double x = 6.5, y = 0.5;
 // Soporta long, int, double y float , pero el resultado de pow siempre sera double
 int b= 2, e=5;
 printf( "base %.2f y exponente %.2f = %.2f ", x, y, pow(x,y) );
 printf( "base % i y exponente %i = % .2f ", b, e, pow(b,e) );
 getch();
}
