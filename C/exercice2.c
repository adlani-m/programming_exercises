// C Program To Find Factorial of a Number
// version 1:
#include <stdio.h>
int main() {
    int i, fact = 1, n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("%d! = ", n);
    for (i = n; i >= 1; i--) {
        printf("%d", i); 
        if (i > 1) {
        printf("*"); 
        }
        fact = fact * i;
    }
    printf(" = %d\n", fact);
    return 0;
    // verson 2 :Using For Loop

     int i,fact=1,n;

    printf("Enter a positive number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
          fact=fact*i;

    printf("Factorial of %d is: %d",n,fact);
    // versioin 3 : Using while Loop
     int i=1 ,n , f=1 ;
     printf("Enter a nombre:");
     scanf("%d",&n);
     while (i<=n){
         f=f*i;
         i++;
     }
     printf("%d!=%d",n,f);
     return 0;
}