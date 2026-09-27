#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n;

    cout << "===============================" << endl;
    cout << "==      SOMA(1)              ==" << endl;
    cout << "==      SUBTRAÇÂO(2)         ==" << endl;
    cout << "==      MULTIPLICAÇÂO(3)     ==" << endl;
    cout << "==      DIVISÂO(4)           ==" << endl;
    cout << "==      SAIR(5)              ==" << endl;
    cout << "===============================" << endl;
    cout << endl;

    cout << "Digite a opção: " << endl;

    while(cin >> n && n != 5){

        int a, b, resultado;

        if(n == 1){
            cout << "DIGITE O VALOR DE A:" << endl;
            cin >> a;
            cout << "DIGITE O VALOR DE B:" << endl;
            cin >> b;

            resultado = a + b;
            cout << "SOMA = " << resultado << endl;
        }else if(n == 2){
            cout << "DIGITE O VALOR DE A:" << endl;
            cin >> a;
            cout << "DIGITE O VALOR DE B:" << endl;
            cin >> b;

            resultado = a - b;
            cout << "SUBTRAÇÂO = " << resultado << endl;
        }else if(n == 3){
            cout << "DIGITE O VALOR DE A:" << endl;
            cin >> a;
            cout << "DIGITE O VALOR DE B:" << endl;
            cin >> b;

            resultado = a * b;
            cout << "MULTIPLICAÇÂO = " << resultado << endl;
        }else if(n == 4){
            cout << "DIGITE O VALOR DE A:" << endl;
            cin >> a;
            cout << "DIGITE O VALOR DE B:" << endl;
            cin >> b;

            resultado = a / b;
            cout << "DIVISÂO = " << resultado << endl;
        }else{
            cout << "Número Invalido!!!\n";
        }

        cout << "Digite a opção: " << endl;

    }

    return 0;
}
