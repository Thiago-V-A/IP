#include <iostream>
using namespace std;
//se ta funcionando...
int main(){
    int x, y, z, c, q;
    c = 0;
    q = 0;
    cin >> x;
    while(x > c){
        cin >> y >> z;
        if(y > z){
            q = z+q;
        }
        c = c+1;
    }
    cout << q << endl;
}
