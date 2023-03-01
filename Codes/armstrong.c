#include <stdio.h>
#include <math.h>

int arm(int x){
    int  og_x, rem, n=0, nums;
    float result=0.0f;

    printf("Enter a number: ");
    scanf("%d", &x);

    og_x = x;
    nums = x;
    
    for (og_x = x; og_x!=0; n++){
        og_x /= 10;
    }

    for (og_x=x; og_x!=0; og_x/=10){
        rem = og_x%10;
        result+=pow(rem, n);
    }

    if ((int)result == x){
        printf("%d is armstrong number: ", nums);
    }

    else{
        printf("%d is not armstrong number: ", nums);
    }

    return 0;
}

void main(){
    int x;
    
    arm(x);
    
}