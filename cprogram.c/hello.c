#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if (num % 2 == 0){
        printf("The number is Even");
    }
    else{
        printf("The number is odd");
    }
    
        return 0;
}