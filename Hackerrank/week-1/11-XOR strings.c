#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    char str1[101],str2[101];
    scanf("%s\n %s",str1,str2);
    for(int i=0;str1[i]!='\0';i++){
        printf("%c",str1[i]==str2[i]?'0':'1');       
    }
    printf("\n");
    return 0;
    
}