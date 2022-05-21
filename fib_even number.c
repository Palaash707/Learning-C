#include<stdio.h>
int main()
{
 long int testcase;
 scanf("%ld",&testcase);
 while(testcase--)
 {
  long int value,fact=0,temp=0,odd=1,even=2,count=0;
  scanf("%ld",&value);
  temp=value;
  while(temp--)
  {
   fact=odd+even;
   odd=even;
   even=fact;
   if(value>fact)
   {
   if(fact%2==0)
   count+=fact;
   }
   else
   break;
   
  }
  printf("%ld\n",count+2);
 }
 return 0;
} 