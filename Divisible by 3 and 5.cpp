#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n;

    cin >> n;

    if(n%3 == 0 && n%5 == 0){
        cout << "É divisivel por 3 e por 5" << endl;
    }else{
        cout << "Não é divisivel por 3 e por 5" << endl;
    }

    return 0;
}
