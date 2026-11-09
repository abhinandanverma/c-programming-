#include <stdio.h>
#include <stdlib.h>
struct n{int d;struct n*next;}*h=NULL,*t;
int main(){
for(int i=1;i<=3;i++){t=malloc(sizeof(struct n));t->d=i*10;t->next=h;h=t;}
for(t=h;t!=NULL;t=t->next)printf("%d->",t->d);
printf("NULL");
return 0;
}