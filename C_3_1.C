#include<stdio.h>
#include<conio.h>
void main(void)
{
 int array[7];
 int counter;
 clrscr();
 for(counter=0;counter<7;counter++)
  { //take the input form the user
    printf("Enter the next number:");
    scanf("%d",&array[counter]);
  }
   //output the numbers in reverse order
 for(counter=6;counter>=0;counter--)
  {
   printf("%d\n",array[counter]);
  }
  getch();
}