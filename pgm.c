#include <stdio.h>
int main()
{
int a[50],n,temp,i,j;
clrscr();
print("Enter the limit:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
temp=a[i];
for(j=i-1;((j>=0)&&(a[j]>temp))
j--;
{
a[j+1]=a[j];
}
a[j+1]=temp;
}
printf("\n the sorted list is");
for(i=1;i<=n;i++)
printf("%d",a[i]);
}

