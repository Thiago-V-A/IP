#include <stdio.h>

int main(){
    float rd, sm = 1405.5, rpc;
    int qp, tp, et, L;
    scanf ("%f %d %d %d", &rd, &qp, &tp, &et);
    rpc = rd/qp;
    if (tp != 1){
        if (rpc < sm && et < 4)
            L = 2;
        if (rpc < sm && et == 4)
            L = 1;
        if (rpc > sm && et == 4)
            L = 3;
        if (rpc > sm && et < 4)
            L = 4;
    printf ("ALUNO COTISTA (L%d)\n", L);

    }else
        printf ("ALUNO NAO COTISTA\n");
    return 0;
}
