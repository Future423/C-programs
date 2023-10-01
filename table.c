#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n;
  clrscr();
  printf("Enter a number ");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
    printf("%3d x %2d = %3d\n",n,i,n*i);
  getch();
}
