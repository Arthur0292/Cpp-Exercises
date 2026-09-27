#include <iostream>

using namespace std;

double f(double x){
    return (x * x) - 5;
}

int main(){

    double a = 1.0, b = 6.0, tol = 0.001, meio;

    int soma = 0;

    if(f(a) * f(b) < 0){
        
        while((b - a) > tol){
            soma++;
            meio = (a + b) / 2;

            if(meio == 0){
                break;
            }

            if(f(meio) * f(b) < 0){
                a = meio;
            }
            if(f(a) * f(meio) < 0){
                b = meio;
            }
        }
        
        cout << meio << endl;

        cout << "Interações: " << soma << endl;

    }else{
        cout << "Intervalo não correto\n";
    }
    



    




    return 0;
}
