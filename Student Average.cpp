#include <iostream>

using namespace std;

class Aluno{

    public:
        Aluno(string nome,  int matr, double notas[], int n, double media){
            cout << "Nome: " << nome << endl;

            double soma = 0;

            for(int i = 0; i<n; i++){
                soma += notas[i];
            }

            media = soma/n;

            cout << "Media: " << media << endl;
        }


};

int main(){
    
    int n;
    double media;

    cin >> n;

    double notas[n];

    for(int i = 0; i<n; i++){
        cin >> notas[i];
    }

    Aluno x("Aluno", 1012, notas, n, media);


    return 0;

}
