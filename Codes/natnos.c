#include <stdio.h>

int main(){
    int x;

    scanf("%d", &x);

    printf("Sum of first %d natural numbers is = %d", x, (x*(x+1))/2);

    return 0;
}