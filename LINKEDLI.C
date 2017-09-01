#include<stdio.h>
#include<conio.h>
struct node
{
int info;
struct node *next;

}*head=NULL,*p,*n;
void Insert();
void InsertAtBeg();
void InsertAtEnd();
void InsertAfterNode();
void InsertBeforeNode();
int length();
void display();
void search();
void deleteN();
void deleteAtBeg();
void deleteAtEnd();
void FindMiddle();
void Update();
void count();
void Reverse();

void main()
{
int ch;
 do
 {
 //display();
 clrscr();
// printf("===========================================================");
 printf("**********MENU********");
 printf("\n 1.Insert\n 2.Display\n 3.Search \n 4.Delete\n 5.FindMiddle \n 6.Update\n 7.count\n 8.InsertAtBeg \n 9.InsertAtEnd\n 10.DeleteAtBeg\n 11.DeleteAtEnd\n 12.InsertAfterNode");
 printf("\n13.InsertBeforeNode\n14.Reverse\n15.Exit\n Enter your choice:");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1: clrscr();display();
  Insert();break;
 // case 2:length();break;
  case 2:clrscr();display();break;
  case 3:clrscr();display();search();break;
  case 4:clrscr();display();deleteN();break;
  case 5:clrscr();FindMiddle();break;
  case 6:clrscr();display();Update();break;
  case 7:clrscr();count();break;
  case 8:clrscr();display();InsertAtBeg();break;
  case 9:clrscr();display();InsertAtEnd();break;
  case 10:clrscr();display();deleteAtBeg();break;
  case 11:clrscr();display();deleteAtEnd();break;
  case 12:clrscr();display();InsertAfterNode();break;
  case 13:clrscr();display();InsertBeforeNode();break;
  case 14:clrscr();display();Reverse();
  case 15:exit(0);
  default:printf("\n Invalid choice....");
 }
 getch();

}while(ch!=15);

}
void display()
{
 if(head==NULL)
    printf("\n list is empty...");
else
{
  printf("\n List is.....");
  p=head;
  while(p!=NULL)
  {
  printf("|%d|->",p->info);
  p=p->next;
  }

  }
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
    if(pos==1)
    {
     n->next=head;
     head=n;
     printf("\n %d is inserted at %d position",n->info,pos);

    }
    else
    {
     p=head;
     for(i=1;i<pos-1;i++)
     {
      p=p->next;
     }
     n->next=p->next;
     p->next=n;


     printf("\n %d is inserted at %d position",n->info,pos);

    }
 }
    else
    printf("\n invalid position..");

 }
void deleteN()
{
 int i,pos;
 if(head==NULL)
 {
 printf("List is Empty...");
 return;
 }
 else
 {
    printf("\n Enter the position:");
    scanf("%d",&pos);
    if(pos<=length())
    {
      if(pos==1)
      {
	n=head;
	head=head->next;

      }
      else
      {
	 p=head;
	while(pos-1>1)
	{
	   p=p->next;
	   pos--;
	 }
	 n=p->next;
	 p->next=n->next;


      }
      printf("%d is deleted from %d position",n->info,pos);
      free(n);

    }

 else
 printf("Invalid postion...");

 }
 }

void FindMiddle()
{
struct node *p1,*p2;
p1=head;
if(head==NULL)
printf("\n List is empty...");
else
{
while(p2!=NULL)
{
p1=p1->next;
p2=p1->next->next;
}

printf("\n %d is the Middle number:",p1->info);
}

}
void Update()
{
 int new1,old,f=0;

 if(head==NULL)
 printf("\n List is Empty:");
 else
 {
  printf("\n enter the number which you wants to replace:");
 scanf("%d",&old);
 printf("\n Enter the new number:");
 scanf("%d",&new1);
 p=head;
 while(p!=NULL && p->info!=old)
 {

 p=p->next;
 }
 p->info=new1;
 f=1;

}
if(f==0)
 printf("\n The Number not found");
else
  printf("List is updated....");
}
void count()
{
int c=0;
p=head;
while(p!=NULL)
{
c++;
p=p->next;
}

printf("\n The number of Node are:%d",c);
}
void InsertAtBeg()
{
 int i,pos;
 if(head==NULL)
 {
  printf("List is empty...");
  n=(struct node*)malloc(sizeof(struct node));
  printf("\n Enter the item:");
  scanf("%d",&n->info);
  n->next=NULL;
  head=n;
  printf("%d is inserted at 1st position",n->info);
  }
  else
  {
  n=(struct node*)malloc(sizeof(struct node));
  printf("\n Enter the item:");
  scanf("%d",&n->info);
  n->next=head;
   head=n;
       printf("\n Node is inserted at 1st position ");
   }
}

void InsertAtEnd()
{
 if(head==NULL)
 {
  printf("List is empty...");
   n=(struct node*)malloc(sizeof(struct node));
  printf("\n Enter the item:");
  scanf("%d",&n->info);
  n->next=NULL;
  head=n;
  printf("\n %d is inserted at last position",n->info);
  }
  else
  {
   n=(struct node*)malloc(sizeof(struct node));
  printf("\n Enter the item:");
  scanf("%d",&n->info);
   p=head;
   while(p->next!=NULL)
   {
   p=p->next;

   }
   p->next=n;
   n->next=NULL;
   printf("\n%d is inserted at last position",n->info);

  }

}

void deleteAtBeg()
{
 if(head==NULL)
 printf("\nList is Empty..");
 else
 {
    p=head;
    head=head->next;
    free(p);
    printf("\n1st Element is deleted...");

  }

}
void deleteAtEnd()
{
 if(head==NULL)
 printf("\nList is Empty...");
 else
 {
  p=head;
   while(p->next->next!=NULL)
   {
    p=p->next;

   }
   n=p->next;
   p->next=NULL;
   free(n);
   printf("\nlast node is deleted..");

 }
}

void InsertAfterNode()
{
   if(head==NULL)
    printf("\nList is Empty...");
  else
  {
   int pos,i;
   p=head;
  n=(struct node*)malloc(sizeof(struct node));
  printf("\n Enter the item:");
  scanf("%d",&n->info);
  printf("\n Enter the position after which u wants to add the node:");
  scanf("%d",&pos);
  for(i=1;i<pos;i++)
  {
   p=p->next;

  }
  n->next=p->next;
  p->next=n;

  printf("\n %d is insert after %d position",n->info,pos);
 }
}

void InsertBeforeNode()
{
   int pos,i;
   if(head==NULL)
      printf("\nList is Empty..");
  else
  {

   p=head;
  n=(struct node*)malloc(sizeof(struct node));
  printf("\n Enter the item:");
  scanf("%d",&n->info);
  printf("\n Enter the position after which u wants to add the node:") ;
  scanf("%d",&pos);
  for(i=1;i<pos-1;i++)
  {
   p=p->next;
  }
  n->next=p->next;
  p->next=n;

  printf("\n %d is insert before %d position",n->info,pos);
  }
}
void Reverse()
{
  struct node *q,*move;
  int i;
  if(head==NULL)
    printf("\n List is Empty...");
  else
  {
  for(i=length();i>=1;i--)
  {
     p=head;
     q=head->next;
  //   move=head;
     while(q->next!=NULL)
     {
      q=q->next;
      p=p->next;

     }
     p->next=NULL;
     q->next=p;
     head=q;
   }
    printf("\n Reverse ....");
  }
}



