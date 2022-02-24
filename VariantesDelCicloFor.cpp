#include <iostream>
using namespace std;
int main()
{
    int i; 
    for (i=0; i <= 10; i++) 
    {
        cout << i << endl;
    }

    for (int j=65; j<= 122; j++)   
    {
        cout << char(j) << ", ";
    }

    int sumapares = 0;    
    for (int k=0; k <= 100; k+=2)   
    {
        sumapares += k;            
    cout << sumapares;
    return 0;
}
