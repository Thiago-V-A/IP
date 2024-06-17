#include <stdio.h>
#include <string.h>

int main() {
  char str1[50], str2[50], strf[100];
  int tam1, tam2, i,j, n;
  scanf("%d",&n);
  while(n--) {
    scanf("%s %s",str1, str2);
    tam1 = strlen(str1);
    tam2 = strlen(str2);
    if(tam1>tam2) {
      j=0;
      for(i=0;i<tam2;i++)
        { strf[j++]= str1[i];
          strf[j++]= str2[i];
         }
       for(i=tam2;i<tam1;i++)
           strf[j++] = str1[i];
       strf[j] = '\0';

      } else if(tam1<tam2) {
                j = 0;
                for(i=0;i<tam1;i++)
                  { strf[j++]= str1[i];
                    strf[j++]= str2[i];
                  }
               for(i=tam1;i<tam2;i++)
                  strf[j++] = str2[i];
               strf[j] = '\0';
            } else {
                     j = 0;
                     for(i=0;i<tam1;i++)
                        { strf[j++]= str1[i];
                          strf[j++]= str2[i];
                        }
                     strf[j] = '\0';
                    }
            printf("%s\n",strf);
       }
  return 0;
  }

