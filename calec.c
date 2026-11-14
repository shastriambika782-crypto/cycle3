#include <stdio.h>
int main(){ 
int a ; int b;
char op;
printf( "enter the value of a: ");
scanf( "%d",&a);
printf( "enter the value of b: ");
scanf( "%d",&b);
printf( "enter the operator ");
scanf( " %c", &op);
  
switch (op) { 
    case '+':
        printf(" result is = %d", a+b);
        break;
         case '-':
        printf(" result is = %d", a-b);
        break; 
        case '*':
        printf(" result is = %d", a*b);
        break;
         case '/':
        printf(" result is = %d", a/b);
        break;
         case '%':
        printf(" result is = %d",  a%b);
        break;
        default:
        printf("invalid operator");
}
    return 0;
}
