#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double x, y, total;

    cin >> x;
    cin >> y;

    if(x == 1){
        total = y * 4;
    }else if(x == 2){
        total = y * 4.5;
    }else if(x == 3){
        total = y * 5;
    }else if(x == 4){
        total = y * 2;
    }else{
        total = y * 1.5;
    }

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << total << endl;




    return 0;
}
