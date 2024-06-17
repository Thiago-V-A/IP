#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x;
    y = 1;
    for(int i=0; i<x; i++){
        if(x%y == 0){
            cout << y << " ";
        }
        y = y+1;
    }
}
