#include <stdio.h>

int main (){
    int mt, nd;
    float sm, sf, ti, ib, il, i, r;
    scanf ("%d %f %d %f %f", &mt, &sm, &nd, &sf, &ti);
    if (12*sm < sf){
        ib = sf*0.2;
        }else if (5*sm < sf){
            ib =sf*0.08;
            }else
            ib = 0;
    i = ti*sf/100;
    il = ib - nd*300;
    r = il-i;
    printf ("MATRICULA = %d\n", mt);
    printf ("IMPOSTO BRUTO = %.2f\n", ib);
    printf ("IMPOSTO LIQUIDO = %.2f\n", il);
    printf ("RESULTADO = %.2f\n", r);
    if (r < 0){
        printf ("IMPOSTO A RECEBER\n");
    }else if (r == 0){
        printf ("IMPOSTO QUITADO\n");
    }else
        printf ("IMPOSTO A PAGAR\n");
    return 0;
}
