#include<stdio.h>
int main()
{ int n,i,j;
int result=1;
printf("How many number's LCM you want to find out? ");
scanf("%d",&n);
int arr[n];
if(n<2)
{
    printf("You entered less than 2 numbers. Try again!");
}
printf("Enter two or more numbers to find LCM of: ");
for(i=0;i<n;i++)
{ printf("\n%d number: ",i+1);
scanf("%d",&arr[i]);
}

 for(i=0;i<n;i++)
{  j=2;  
while(arr[i]!=1&&j<=arr[i])
{ 
  if(arr[i]%j==0)
  {   result*=j;
    arr[i]/=j;
  } 
  else
 {
    j++;
 }
}
}
printf("LCM= %d",result);
return 0;
}    
