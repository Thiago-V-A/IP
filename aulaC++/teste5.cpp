#include <iostream>
using namespace std;

int main(){
    double x,y,z;
    cin>>x>>y;
    z=(x+y)/2;
    if(z>=7){
        cout<<"Aprovado\n";
    }else if(z<4){
        cout<<"Reprovado\n";
    }else cout<<"Recuperacao\n";
}
