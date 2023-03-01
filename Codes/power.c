#include <stdio.h>

void main(){
    int x, y, choice, run=1;
    char flag;
    
    while (run!=0)
    {
        printf("y/n: ");
        scanf("%c", flag);

        if (flag=='y')
        {
            run=1;
        }
        else{
            run=0;
        }
        
    }


}