#include <iostream>
using namespace std;

int main(){
    int p, n, v;
    cin >> p >> n;
    for(int i=0; i<n ; i++){
        cin >> v;
        p = p+v;
        if(p > 100){
            p=100;
        }
        if(p < 0){
            p=0;
        }
    }
    cout << p <<endl;
}
