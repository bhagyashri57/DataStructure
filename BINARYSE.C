#include<stdio.h>
#include<conio.h>
#define MAX 10
void main()
{
int L=0,U=MAX-1,M=(L+U)/2;
int a[MAX],item,i,f=0;
clrscr();
printf("\n Enter the elements:");
for(i=0;i<=MAX-1;i++)
{
scanf("%d",&a[i]) ;
}
printf("\nEnter the item to be serched:");
scanf("%d",&item);
while(L<=U && a[M]!=item)
{
if(item<a[M])

		   U=M-1;
      else
		   L=M+1;
		   M=(L+U)/2;

}
 if(a[M]==item)

printf("\n Element is found..");
else
  printf("\n Element is not found..");

getch();
}