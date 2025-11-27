#include<stdio.h>
int main(){
int a[100],n,i,pos;
printf("Enter the length of array\n");
scanf("%d",&n);
printf("Enter the array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("Enter position to delete");
scanf("%d",&pos);
if(pos > n)
printf("invalid position!");
else
{
for(i=pos-1;i<n-1;i++)
a[i]=a[i+1];
}
n--;
for(i=0;i<n;i++) 
printf("%d\n",a[i]);
return 0;
}
