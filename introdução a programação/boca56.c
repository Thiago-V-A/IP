#include <stdio.h>

int main (){
    double vi, r, d=0;
    int n, i;
    scanf ("%lf %lf %d", &vi, &r, &n);
    for (i=1;i<=n;i++){
        d = vi*r+d;
        vi = vi*r+vi;
        printf ("a*(1+r)^%d = %.2lf, renda: %.2lf\n", i, vi, d);
    }

    return 0;
}
