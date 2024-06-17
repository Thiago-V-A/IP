#include <stdio.h>

int main() {
  int mat, nt1, nt2;
  float salmin, salbruto, salliq, com1, com2, imposto, inss, limir, valt1, valt2;
  scanf("%f %f %f %f",&salmin, &limir, &valt1, &valt2);
  scanf("%d %d %d", &mat, &nt1, &nt2);
  while(mat!=0) {
    if(nt1>=10)
      com1 = nt1*valt1*0.14;
     else com1 = nt1*valt1*0.13;
    if(nt2>=20)
       com2 = nt2*valt2*0.13;
     else com2 = nt2*valt2*0.12;
   salbruto = salmin + com1 + com2;
   inss = salbruto*0.08;
   if((salbruto-inss)> limir)
      imposto = ((salbruto - inss)-limir)*0.15;
     else imposto = 0.0;
   salliq = salbruto - inss - imposto;
   printf("MATRICULA = %d, SALARIO BRUTO = %.2f, SALARIO LIQUIDO = %.2f\n",mat, salbruto, salliq);

  scanf("%d %d %d", &mat, &nt1, &nt2);
  }

return 0;
}
