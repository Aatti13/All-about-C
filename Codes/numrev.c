#include <stdio.h>


int reverse(int n){
    int rem, first;
    while (n!=0){
        rem%=10;
        first = first*10+rem;
        n /= 10;
    }
    return first;
}

int main(){
    int n;

    scanf("%d", n);

    
    printf("Reverse of %d is: %d", n, reverse(n));

    return 0;

}