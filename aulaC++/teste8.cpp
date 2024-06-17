#include <iostream>
using namespace std;

int main(){
    int N, A, x, z, a;
    cin >> N;
    x = 0;
    z = 0;
    a = 1;
    while(N > x){
        cin >> A;
        x = x+1;
        z = z+A;
            if(z < 1000000){
            a = a+1;
        }
    }
    cout << a << endl;
}
