#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    while(x <= y){
        if(x%2 == 0){
            cout << x << endl;
        }
        x = x+1;
    }
}
