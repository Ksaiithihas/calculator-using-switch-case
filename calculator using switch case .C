#include <stdio.h>

void main ()
{
int a,b,n,result;

printf ("Please enter the number A :");



scanf("%d",&a);
printf("Please enter the number B:");
scanf ("%d",&b);

printf(" Enter1 for Addition,2 for sub,3 for multi,4 for div :");
scanf("%d",&n);

switch(n)
{
    case 1:
    result = a+b;
    printf("%d",result);
    break; 
    case 2:
    result = a-b;
    printf("%d",result);
    break; 
    case 3:
    result = a*b;
    printf("%d",result);
    break;
    case 4:
    
    result = a/b;
    printf("%f",result);
    break;
}


}


