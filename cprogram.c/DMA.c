#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)
    malloc(sizeof(int));
    if(ptr== NULL)
    {
        printf("memory not allocated");
        return 0;
    }
    *ptr =50;
    printf("value=%d",*ptr);
    free(ptr);
    return 0;
}