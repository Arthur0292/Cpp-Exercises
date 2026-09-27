#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n, n1, n2;

    cout << "Digite um número: " << endl;
    cin >> setw(4) >> n;

    n1 = n/100;
    n2 = n%100;

    int n3 = (n1 + n2) * (n1 + n2);

    if(n3 == n){
        cout << "O número possui a propriedade" << endl;
    }else{
        cout << "O número não possui a propriedade" << endl;
    }








    return 0;
}
