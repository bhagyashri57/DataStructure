struct node
{
int info;
struct node *next;

}*top=NULL,*n;
void InsertAtBeg();
void DeleteAtBeg();
void display();
int underflow();

void main()
{
 char ch;
 do
 {
  clrscr();
  printf("\n 1.InsertAtBeg\n 2.DeleteAtBeg\n 3.Display\n 4.Exit");
  printf("\n Enter your choice:");
  ch=getch();
  switch(ch)
  {
    case '1':clrscr();display();InsertAtBeg();break;
    case '2':clrscr();display();DeleteAtBeg();break;
    case '3':clrscr();display();break;
    case '4':exit(0);
    default:printf("\n Invalid choice...");
  }



 } while(ch!='4');







}
