#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x;
    double y;
    cin >> x;
    cout.precision(4);
    cout.setf(ios::fixed);
    for(int i = 0; i < x; i++){
        cin >> y;
        cout << sqrt(y) << endl;
    }
}
