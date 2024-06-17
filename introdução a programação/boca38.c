#include <stdio.h>

int main(){
    float a, b, c, x;
    scanf ("%f %f %f", &a, &b, &c);
    if ((-(b-c)<a || b-c < a) && a < b+c &&
        (-(a-c)<b || a-c < b) && b < a+c &&
        (-(a-b)<c || a-b < c) && c < a+b){
        printf ("Perimetro = %.1f\n", a+b+c);
    }else {
        x = ((a+b)*c)/2;
        printf ("Area = %.1f\n", x);
    }


    return 0;
}
