#include <iostream>
using namespace std;

int main(){
    int n, c, l1, l2;
    l1 = 0;
    l2 = 0;
    cin >> n;
    for(int i = 0; n > i; i++){
        cin >> c;
        if(c == 1 and l1 == 0){
            l1 = l1 + 1;
        }else if(c == 1 and l1 == 1){
            l1 = l1 - 1;
        }else if(l1 == 1){
            l1 = l1 - 1;
        }else if(l1 == 0){
            l1 = l1 + 1;
        }
        if(c == 2 and l2 == 0){
            l2 = l2 + 1;
        }else if (c == 2 and l2 == 1){
            l2 = l2 - 1;
        }
    }
    cout << l1 << endl << l2 << endl;
}
