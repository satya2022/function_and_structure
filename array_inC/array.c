// simple_array first code
/*
#include <stdio.h>
#include <conio.h>
void main(){
    int arr[5]={0,1,2,3,8};
    for(int i=0; i < 5; i++){
        printf("%d",arr[i]);
    }
}
*/


// simple_array second code
/*
#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter array %d value=",i);
        scanf("%d", &arr[i]);
        printf("\n");
        printf("u enter array %d value=", i);
        printf("%d", arr[i]);
        printf("\n");

    }
 
}
*/


// simple_array second code
/*
#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter array %d value=",i);
        scanf("%d", &arr[i]);

    }
    printf("\n");
    for (int i = 0; i< 5; i++)
    {
        printf("you enter array %d value is=",i);
         printf("%d",arr[i]);
        printf("\n");

    }
}
*/


#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char arr[5]={'a','b','c','d','e'};
    for (int i = 0; i < 5; i++)
    {
     printf("enterd chareter array value=%c",arr[i]);
     printf("\n");

    }
    
}
