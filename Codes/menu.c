#include <stdio.h>
#include <conio.h>

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int multiply(int a, int b){
    return a*b;
}

int divide(int a, int b){
    return a/b;
}

void main(){
    int choice, a, b;
    printf("----------------MENU-----------------\n1. Add2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\nEnter choice: ");
    scanf("%d", &choice);
    printf("You Chose: %d", choice);

    switch (choice)
    {
    case 1:
        printf("Enter problem(a+b):");
        scanf("%d+%d", &a, &b);
        printf("%d+%d=%d", a, b, add(a, b));
        break;
    case 2:
        printf("Enter problem(a-b):");
        scanf("%d-%d", &a, &b);
        printf("%d-%d=%d", a, b, sub(a, b));
        break;
    case 3:
        printf("Enter problem(axb):");
        scanf("%dx%d", &a, &b);
        printf("%dx%d=%d", a, b, multiply(a, b));
        break;
    case 4:
        printf("Enter problem(a/b):");
        scanf("%d/%d", &a, &b);
        printf("%d/%d=%d", a, b, divide(a, b));
        break;
    
    default:
        printf("Exitintg");
        break;
    }
    getch();
}