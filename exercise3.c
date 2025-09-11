#include<stdio.h>
int main(){
  // Variable declaration
   int a,b,c,larg;

   printf("Enter Three Numbers :\n");
   scanf("%d %d %d",&a,&b,&c);

  // Larg among a, b and and c
   larg = a>b ? a>c ? a:c : b>c ? b:c ;
    printf("Largest Number Among 3 Number : %d",larg);
}