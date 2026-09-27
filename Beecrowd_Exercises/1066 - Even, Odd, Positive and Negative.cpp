#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int par = 0, impar = 0, po = 0, ne = 0;

    for(int i = 0; i<5; i++){
        int n;
        cin >> n;
        if(n > 0){
            po++;
        }else if(n < 0){
            ne++;
        }

        if(n%2 == 0){
            par++;
        }else{
            impar++;
        }
    }

    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << po << " valor(es) positivo(s)" << endl;
    cout << ne << " valor(es) negativo(s)" << endl;

    return 0;
}
