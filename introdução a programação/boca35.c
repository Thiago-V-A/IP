#include <stdio.h>

int main(){
    int x1, x2, x3, tmp = 0;
    char c1, c2, c3;
    scanf ("%d %d %d %c %c %c", &x1, &x2, &x3, &c1, &c2, &c3);
    if (x1 > x3){
        tmp = x3;
        x3 = x1;
        x1 = tmp;
    }
     if (x1 > x2){
        tmp = x2;
        x2 = x1;
        x1 = tmp;
    }
     if (x2 > x3){
        tmp = x3;
        x3 = x2;
        x2 = tmp;
    }

    if (c1 == 'A') printf ("%d ", x1);
    if (c1 == 'B') printf ("%d ", x2);
    if (c1 == 'C') printf ("%d ", x3);
    if (c2 == 'A') printf ("%d ", x1);
    if (c2 == 'B') printf ("%d ", x2);
    if (c2 == 'C') printf ("%d ", x3);
    if (c3 == 'A') printf ("%d\n", x1);
    if (c3 == 'B') printf ("%d\n", x2);
    if (c3 == 'C') printf ("%d\n", x3);

    return 0;
}
