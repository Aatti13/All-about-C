#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char cc[10];
    int flag = 0;

    scanf("%[^\n]s", cc);
    printf("%s\n", cc);
    int len = strlen(cc);

    for (int i = 0; i<len; i++){
        if (cc[i] != cc[len-i-1]){
            flag = 1;
            break;
        }
    }

    if (flag==1)
    {
        printf("%s is not a pallindrome\n", cc);
    }

    else{
        printf("%s is a pallindrome\n", cc);
    }
    

    printf("Length of %s: %zu", cc, strlen(cc));

    return 0;
}