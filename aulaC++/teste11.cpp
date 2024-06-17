#include <iostream>
using namespace std;

int main(){
    int n, i = 0, m[i], z=1, d = 1;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m[i];
    }
    for(;m[i-1] == m[1]; d = d+1)
    cout << z << endl;
}
