#include <stdio.h>

int main (){
    double nu, rz, ant=1, at=1, er;
    scanf ("%lf %lf", &nu, &rz);
    do{
        at = (ant + (nu/ant))/2;
        ant = at;
        at = at*at;
        er = nu - at;
        if (er < 0)
            er = -(er);
        printf ("r: %.9lf, err: %.9lf\n", ant, er);
    }while(er>rz);

    return 0;
}
