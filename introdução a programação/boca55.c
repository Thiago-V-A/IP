#include <stdio.h>

int main(){
    float qth, vph, d;
    int m;
    do{
        scanf ("%d %f %f", &m, &qth, &vph);
        if (m == 0)
            break;
        d=qth*vph;
        printf ("%d %.2f\n", m, d);
    }while (m!=0);
    return 0;
}
