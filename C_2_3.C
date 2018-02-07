#include<stdio.h>
#include<conio.h>
void main(void)
{
  char choice;
  clrscr();
  printf("Entetr the coice(a,b,c):");
  scanf("%c",&choice);
  switch(choice)
  {
  case'A':
  case'a':printf("ES"); break;
  case'B':
  case'b':printf("CPP"); break;
  case'C':
  case'c':printf("Java");break;
  default:printf("Wrong Choice!"); break;

  }

  getch();

}