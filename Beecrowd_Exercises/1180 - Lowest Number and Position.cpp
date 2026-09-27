#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n, menor, posicao;

    cin >> n;

    int array[n];

    for(int i = 0; i<n; i++){
        cin >> array[i];
    }
    
    for(int i = 0; i<n; i++){
        if(i == 0){
            menor = array[i];
            posicao = i;
        }

        if(array[i] < menor){
            menor = array[i];
            posicao = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}
