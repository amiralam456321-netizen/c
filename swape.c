#include<stdio.h>
int main(){
    int A ,B ,temp;
    printf("Enter the number(A)");
     scanf("%d",&A);

     printf("Enet the number (B)");
     scanf("%d",&B);

    printf("before the A = %d, B= %d\n", A, B);
     
    temp = A;
    A = B;
    B= temp;

    printf("After swapping: A = %d, B = %d\n", A, B);

    return 0;
}
