#include<stdio.h>
#include<conio.h>

void main()

{
int i,num,c[40],s;
clrscr();
printf("enter the number of elements:");
scanf("%d",&num);
printf("enter the elements of array:");
for(i=0;i<num;i++)
scanf("%d",&c[i]);
s=c[0];
for(i=1;i<num;i++)
s^=c[i];

printf("After translation :%d",s);

getch();
}
