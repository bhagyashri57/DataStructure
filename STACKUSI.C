#include<stdio.h>
#include<conio.h>
struct node
{
int info;
struct node *next;

}*top=NULL,*n;
void InsertAtBeg();
void DeleteAtBeg();
void display();
//int underflow();

void main()
{
 int ch;
 do
 {
  clrscr();
  printf("\n 1.InsertAtBeg\n 2.DeleteAtBeg\n 3.Display\n 4.Exit");
  printf("\n Enter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:InsertAtBeg();break;
    case 2:display();DeleteAtBeg();break;
    case 3:display();break;
    case 4:exit(0);
    default:printf("\n Invalid choice...");
  }

 } while(ch!=4);

}

void InsertAtBeg()
{
  n=(struct node*)malloc(sizeof(struct node));
   if(top==NULL)
      printf("List is empty...");
  else
  {
  printf("\n Enter the item:");
  scanf("%d",&n->info);
  n->next=top;
  top=n;
  printf("%d is pushed onto stack",n->info);

  }
}
void DeleteAtBeg()
{
  if(top==NULL)
     printf("\n Underflow");

  else
  {
    n=top;
    top=top->next;
    printf("\n %d is poped from stack",n->info);
    free(n);
  }
}

void display()
{
  if(top==NULL)
     printf("\nstack is empty: ");
   else
   {
     printf("stack is...");
     n=top;
     while(n!=NULL)
     {
     printf("\n %d",n->info);
     n=n->next;

     }

   }
}
