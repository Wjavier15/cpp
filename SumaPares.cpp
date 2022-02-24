#include <iostream>
 
int main()
{
    int suma = 0;
 
    for( int i = 1; i <= 100; i++ ){
        if( i % 2 == 0 ) suma += i;
    }
 
    std::cout << "\nLa suma de los numeros pares es: " << suma << std::endl;
 
    return 0;
}
