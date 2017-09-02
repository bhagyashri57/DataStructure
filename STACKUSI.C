#include<stdio.h>
#define MAX 10
int top=-1;
void Push();
void Pop();
void display();
int Underflow();
int Overflow();
int stack[MAX];

void main()
{
 char ch;
 do
 {
  clrscr();
  printf("\n 1.Push\n 2.Pop\n 3.Display\n 4.Exit");
  printf("\n Enter your choice:");
  ch=getch();
  switch(ch)
  {
    case '1':clrscr();display();Push();break;
    case '2':clrscr();display();Pop();break;
    case '3':clrscr();display();break;
    case '4':exit(0);
    default:printf("\n Invalid choice...");
  }
   getch();
 } while(ch!='4');
}

void Push()
{
 if(Overflow())
     printf("\n stack is full...");
  else
  {
    int item;
    printf("\n Enter the item:");
    scanf("%d",&item);
    top++;
    stack[top]=item;
    printf("\n %d is pushed on to stack...");
  }

}

void Pop()
{
  if(Underflow())
     printf("\nstack is empty...");
 else
 {
 int item;
 item=stack[top];
 top--;
 printf("\n %d is poped from stack",item);


 }
 }


void display()
{
  if(Underflow())
      printf("\n Stack is empty..");
   else
   {
   int i;
   printf("stack is...") ;
   printf("\nTop->");
   for(i=top;i>=0;i--)
   {
   printf("\t|%d|\n",stack[i]);
   printf("\t----\n");

   }
   printf("\n========================");
   }
}

int Overflow()
{
  if(top==MAX-1)
    return 1;
  else
  return 0;
}

int Underflow()
{
  if(top==-1)
    return 1;
  else return 0;

}