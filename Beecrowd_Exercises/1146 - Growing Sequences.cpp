#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n;

    cin >> n;
    
    while(n != 0){

        for(int i = 0; i<n; i++){
            if(i != n - 1){
                cout << i + 1 << " ";
            }else{
                cout << i + 1 << endl;
            }
        }


        cin >> n;


    }

    return 0;
}
