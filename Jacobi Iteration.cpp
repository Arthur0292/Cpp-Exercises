#include <iostream>

using namespace std;

int main(){

    double x = 0, y = 0, x_novo = 0, y_novo = 0, tol = 0.0001;

    for(int i = 0; i<10; i++){
        cout << "Interação "<< i << "\n";
        x_novo = (5 - y)/3;
        x = x_novo;
        y_novo = (4 - x)/2;

        y = y_novo;
    

        cout << "x: " << x  << endl;
        cout << "y: " << y  << endl;
        cout << endl;
    }





    return 0;
}
