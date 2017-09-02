#include<stdio.h>
#include<conio.h>
struct node
{
int info;
struct node *next;

} *F=NULL,*R=NULL,*n,*p;
void Insert();
void Delete();
void display();
int Underflow();

void main()
{
  char ch;
  do
  {
  //char ch;
 clrscr();

  printf("\n *******MENU*********");
  printf("\n 1.Insert\n 2.Delete\n 3.Display\n 4.Exit");
  printf("\n Enter ur choice");
  ch=getch();
  switch(ch)
  {
    case '1':clrscr();display();Insert();break;
    case '2':clrscr();display();Delete();break;
    case '3':clrscr();display();break;
    case '4':exit(0);
    default:printf("\n Invalid choice...");

  }
   getch();
  } while(ch!='4');
}

void Insert()
{
 n=(struct node*)malloc(sizeof(struct node));
 n->next=NULL;
  if(F==NULL && F==NULL)
  {
     printf("\n Initially there is no node:");
     printf("\n Enter the item:");
     scanf("%d",&n->info);
     F=R=n;
     printf("\n%d is inserted",n->info);

  }
  else
  {   p=F;
     //printf("\n Initially there is no node:");
     printf("\n Enter the item:");
     scanf("%d",&n->info);
     while(p->next!=NULL)
     {
     p=p->next;
     }
     p->next=n;
     R=n;

     printf("\n%d is inserted",n->info);
  }

}

void Delete()
{
  if(Underflow())
     printf("Queue is empty...");
  else
  {
   n=F;
   printf("\n %d is deleted from queue",n->info);

   if(F==R)
   F=R=NULL;
   else
   {
   F=F->next;
   free(n);
   }
  }
}

void display()
{
   if(Underflow())
       printf("\n Queueis empty...");
    else
    {

    int i;
    p=F;
    printf("\n Queue is....");
    printf("\nF->");
      while(p!=NULL)
      {
      printf("|%d|",p->info);
      p=p->next;

      }
      printf("<-R");
      printf("\n==========================================");
    }
}
int Underflow()
{
  if(F==NULL)
      return 1;
   else
      return 0;
}