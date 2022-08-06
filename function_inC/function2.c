/*// Example for Function with argument and without return value
#include <stdio.h>
void sum(int, int);
void main()
{
    int a, b;
    printf("enter two value");
    scanf("%d"
          "%d",
          &a, &b);
    sum(a, b);
}
void sum(int k, int h)
{
    printf("sum two value=%d", k + h);
}
*/
// Example 2: program to calculate the average of five numbers.
#include <stdio.h>
void average(int, int, int, int, int);  
void main(){
int a,b,c,d,e;

printf("enter value of all 5 numbers\n");
scanf("%d""%d""%d""%d""%d",&a,&b,&c,&d,&e);
average(a,b,c,d,e);
}
void average(int a,int b,int c,int d,int e){
    float avg;
    avg=( a+b+c+d+e)/5;
    printf("average=%f\n",avg);
}
