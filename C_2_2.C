#include<stdio.h>
#include<conio.h>
void main(void)
{
 int number;
 int sum =0;
 clrscr();
 while(sum<=100){
   printf("Enter the next number:");
   scanf("%d",&number);
   sum+=number;
  if(sum<=100)
    {
     printf("sum= %d\n",sum);
    }
  else
    {
     printf("sum is greater than 100 by %d",sum-100);
     printf("\nSum= %d",sum-number);
}}
getch();




kam satr
kam satr
login 

}