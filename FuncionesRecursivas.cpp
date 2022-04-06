#include &ltiostream&gt
using namespace std;

double factorial(int numero);

int main(){
    int numero;
    cout &lt&lt "Introduzca numero: ";
    cin &gt&gt numero;
    cout &lt&lt "factorial: " &lt&lt factorial(numero) &lt&lt endl;

    return 0;
}

double factorial(int numero){
    if (numero == 1){
        return 1;
    }else{
        return numero*factorial(numero-1);
    }
}
