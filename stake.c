#include<stdio.h>
#define MAX 5
int main(void)
{
    do while 
    int choice=0
    printf("the stake operation are:");
    printf("1.INSERTION`");
    printf("2.DELETION");
    printf("3.PEAK");
    printf("4.display");
    printf("enter your choice:");
    scanf("%d".&choice);
    switch(choice)
    {
        case1:push();
        break;
        case2:pop();
        break;
        case3:peek();
        break;
        case4:display();
        break;
        case5:printf("exiting program");
        break;
        default:print("invalid choice");
    }
}
void push()
{
if(top==MAX-1)
printf("stack overflow\n");
printf("enter the elements\n");
scanf("&d",&value);
a[++top]=value;
}
void pop
{
if(top==-1)
printf("stack underflow\n");
printf("enter the elements\n");
scanf("&d",&value);
a[--top]=value;
}