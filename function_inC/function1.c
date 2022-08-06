/*// FUNCTION WITH RETURN TYPE
#include <stdio.h>
int sum();

void main()
{
    int result;
    result = sum();
    printf("a+b= %d\n", result);
}
int sum()
{
    int a, b;
    printf("enter two number");
    scanf("%d" "%d", &a, &b);
    return a + b;
}
*/

// program to calculate the area of the square
#include <stdio.h>
int square();
void main()
{
    float area;
    area = square();
    printf("square=%f", area);
}
int square()
{
    float a;
    printf("enter side value of square=");
    scanf("%f", &a);
    return a * a;
}
