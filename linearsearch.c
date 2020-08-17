#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10]={1,20,78,54,67,3,9,55,44,32};
  int i,n,x=0;
  clrscr();
  printf("Enter number: ");
  scanf("%d",&n);
  for(i=0;i<=9;i++)
  {
    if(a[i]==n)
    {
      x=1;
      break;
    }
  }
  if(x==1)
  {
    printf("Number found at %d location",(i+1));
  }
  else
  {
    printf("Number not found");
  }
  getch();
  }
