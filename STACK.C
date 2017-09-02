#include<stdio.h>
#include<conio.h>
#define SIZE 5           
int s[SIZE], top = -1; 

void main() 
{ 

 int ch, n;

 do {
  clrscr();
  printf(" ### Stack Operations ### ");
  printf("\n 1-Push \n 2-Pop \n 3-Display \n 4-Exit ");
  printf("\n Enter Your choice");
  scanf("%d", &ch);
  switch (ch)

 {
	  case 1:
		printf("\n Enter the element to be pushed");
		scanf("%d", &n);
		push(n);
		break;

	 case 2:
		n= pop();
		if (n!= -1)
		printf("\n Popped Element is %d ", n);
		break;

	case 3:
		display();
		break;

	case 4:
		exit(0);
		break;

	default:
		printf("\n Invalid Option !!! ");
		break;
  }
 } while (ch != 4);
}

push(int n)
{
if (Sfull())
  printf("\n Overflow");
 else {
  top++;
  s[top] = n;
 }

}

int pop()
 {

 int n;
 if (Sempty())
{
  printf("\nUnderflow");
  return (-1);
 } else {
  n = s[top];
  top--;
  return (n);
 // printf("\n Popped Element is %d ", n);

	}
}

int Sfull()
{
 if (top == SIZE - 1)
  return 1;
 return 0;
 getch();
}

int Sempty()
{
if (top == -1)
  return 1;
 return 0;
 getch();
}

display() {
int i;
 if (Sempty())
  printf("\n Empty Stack");
 else {
  for (i = 0; i <= top; i++)
   printf(" %d \n", s[i]);

 }
 getch();
}

