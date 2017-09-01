#include<stdio.h>
#include<conio.h>
struct node
{
int info;
struct node *next,*prev;

}*head=NULL,*last=NULL,*p,*n,*t;

void Insert();
void search();
void display();
void Reverse();
int length();
void count();
void InsertAtBeg();
void InsertAtEnd();
void main()
{
  int ch;
 do
 {
 clrscr();
 printf("**********MENU********");
 printf("\n 1.Insert\n 2.Display \n 3.search\n 4.Reverse\n 5.count\n6.InsertAtBeg\n7.InsertAtEnd\n8.Exit");
 printf("\n\n Enter your choice:");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1: clrscr();display();Insert();break;
  case 2:clrscr();display();break;
  case 3:clrscr();display();search();break;
  case 4:clrscr();display();Reverse();break;
  case 5:clrscr();display();count();break;
  case 6:clrscr();display();InsertAtBeg();break;
  case 7:clrscr();display();InsertAtEnd();break;
  case 8:exit(0);
  default:printf("Invalid Choice...");
  }
  getch();
}while(ch!=8);
}
void Insert()
{
 int i,pos;
 printf("\n enter the position:");
 scanf("%d",&pos);
 if(pos<=length()+1)
 {
    n=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the item:");
    scanf("%d",&n->info);
    n->next=NULL;
    n->prev=NULL;
    if(head==NULL)
    {
    // printf("Initially List is empty");
     head=last=n;
      printf("\n %d is inserted at %d position",n->info,pos);

     }
   else
    if(pos==1)
    {
     n->next=head;
     head->prev=n;
     head=n;
     printf("\n %d is inserted at %d position",n->info,pos);

    }
    else if(pos==length()+1)
    {
	last->next=n;
	n->prev=last;
	last=n;

    }
    else
    {
     p=head;
     for(i=1;i<pos-1;i++)
     {
      p=p->next;
     }
     t=p->next;
     n->next=p->next;
     t->prev=n;

     p->next=n;
     n->prev=p;


     printf("\n %d is inserted at %d position",n->info,pos);

    }
 }
    else
    printf("\n invalid position..");
 }

int length()
{
int c=0;
p=head;
while(p!=NULL)
{
  c++;
  p=p->next;
}
     return c;
}
void display()
{
 if(head==NULL)
    printf("List is Empty...");

else
  {
    p=head;
    printf("\n List is.....");
    while(p!=NULL)
    {
    printf("|%d|<->",p->info);
    p=p->next;

    }
  }
}

void search()
{
int item;
 if(head==NULL)
    printf("\n List is Empty...");
else
{
 printf("\n Enter the number to be search:");
 scanf("%d",&item);
 p=head;
 while(p!=NULL && p->info!=item)
 {
 p=p->next;
 }
 if(p==NULL)
 printf("%d is not found",item);
 else
 printf("%d is found",item);

  }
}
void Reverse()
{
 if(head==NULL)
     printf("List is Empty....");

 else
 {
 printf("\n Reverse List is..... \n");
    p=last;
   while(p->prev!=NULL)
   {
   printf("|%d|->",p->info);
   p=p->prev;
   }
   printf("|%d|",p->info);
 }


}
void count()
{
  int c=0;
  if(head==NULL)
  printf("List is Empty..");
 else
 {
  p=head;
  while(p!=NULL)
  {
  c++;
  p=p->next;

  }
  printf("\n The number of Nodes are:%d",c);
 }

}

void InsertAtBeg()
{
    n=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the item:");
    scanf("%d",&n->info);
    n->next=NULL;
    n->prev=NULL;
   if(head==NULL)
   {
     printf("Initially List is Empty..");
      head=n;
      last=n;
     printf("\n %d is inserted at 1st position",n->info);
   }
   else
   {
     n->next=head;
     head->prev=n;
     head=n;
     printf("\n %d is inserted at 1st position",n->info);
   }
}

void InsertAtEnd()
{
   n=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the item:");
    scanf("%d",&n->info);
    n->next=NULL;
    n->prev=NULL;
   if(head==NULL)
   {
     printf("Initially List is Empty..");
      head=n;
      last=n;
     printf("\n %d is inserted at last position",n->info);
   }
  else
  {
    p=head;
    while(p->next!=NULL)
    {

    p=p->next;
    }
   p->next=n;
   n->prev=p;
   last=n;

   printf("\n %d is inserted at last position",n->info);

  }


}