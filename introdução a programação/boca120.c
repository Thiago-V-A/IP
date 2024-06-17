#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long int string2int( const char * str ){
	 long int res;
	 res = atoi(str);
	 return res;
 }

int main(void)
{
    char str[10];
    long value;
    while(scanf("%s",str)!=EOF){
       value = string2int(str);
       printf("%ld %ld\n", value, value+value);
    }

    return 0;
}
