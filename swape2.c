#include <stdio.h>
 int main (){
    int a,b,c,temp ;
     printf("Enter the number (a)");
     scanf("%d",&a);

     printf("Enter the number (b)");
     scanf("%d",&b);

     printf("Enter the number (c)");
     scanf("%d",&c);

     printf("before the a = %d, b= %d, c =%d\n", a, b,c);
\
     temp= a;
     a=b;
     b=c;
     c=temp;
     printf("After swapping: a = %d, b = %d,c=%d\n", a, b,c);

    return 0;

    }
