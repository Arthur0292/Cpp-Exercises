#include <iostream>

using namespace std;

int main(){

    int n, x, soma = 0;
    cin >> n;

    for(int i = 0; i<5; i++){
        cin >> x;
        
        if(x == n){
            soma++;
        }

    }

    cout << soma << endl;


    
    return 0;
}
