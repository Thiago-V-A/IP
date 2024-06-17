#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int tam, qtd, i, j, k;
    char cif[21], ctcif[21], cifmin[21], ctcifmin[21], txt[1024];
    while(scanf("%d %d", &tam, &qtd)!=EOF){
        getchar();
        fgets(cif, 21, stdin);
        fgets(ctcif, 21, stdin);
        for(i = 0; i<strlen(cif); i++)
            cifmin[i] = tolower(cif[i]);
        for(i = 0; i<strlen(ctcif); i++)
            ctcifmin[i] = tolower(ctcif[i]);
        for(k = 0; k < qtd; k++){
            fgets(txt, 1024, stdin);
            for(i = 0; i < strlen(txt); i++){
                for(j = 0; j < tam; j++){
                    if(txt[i]==ctcif[j] || txt[i]==ctcifmin[j]){
                        if(txt[i] > 64 && txt[i] < 91)
                            txt[i]=cif[j];
                        else
                            txt[i]=cifmin[j];
                        break;
                    }else if(txt[i]==cif[j] || txt[i]==cifmin[j]){
                        if(txt[i] > 64 && txt[i] < 91)
                            txt[i]=ctcif[j];
                        else
                            txt[i]=ctcifmin[j];
                        break;
                    }
                }
            }
            printf("%s\n", txt);
        }
    }


    return 0;
}
