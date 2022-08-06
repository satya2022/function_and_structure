/*// Example for Function with argument and with return value
#include <stdio.h>
int sum(int,int);
void main(){
int a,b;
int result;
printf("enter value of a,b\n");
scanf("%d" "%d",&a,&b);

result=sum(a,b);
printf("sum of values=%d\n",result);
}
int sum(int a,int b){
return a+b;
}
*/
// Example 2: Program to check whether a number is even or odd
#include <stdio.h>
int even_odd(int a);
void main()
{
    int a, result;
    printf("enter any number");
    scanf("%d", &a);
    result = even_odd(a);
    if (result == 0)
    {
        printf("number is odd");
    }
    else
    {
        printf("number is even");
    }
}
int even_odd(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
