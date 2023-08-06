#include <stdio.h>
int main()
{
int a, n;
printf("Enter the size of array:");
scanf("%d",&n);
int s[n];
printf("Enter the elements:\n");
for(int i=0;i<=n-3;i++)
{
scanf("%d",&s[i]);
}
int count=n-2;
if(count>0)
{
printf("Enter the index of the element to be deleted:");
scanf("%d",&a);
for(int i=a;i<count;i++)
{
s[i]=s[i+1];
}
count--;
for(int i=0;i<count;i++)
{
printf("%d ",s[i]);
}
}
if(count<n)
{
printf("\nEnter the index where you want to insert the element:");
scanf("%d",&a);
for(int i=count;i>=a;i--)
{
s[i+1]=s[i];
}
printf("Enter the element here:");
scanf("%d",&s[a]);
count++;
for(int i=0;i<count;i++)
{
printf("%d ",s[i]);
}
}
if(count<n)
{
printf("\n%d more empty indexes are available\n",n-count);
}
if(count<n)
{
printf("Enter the index:");
scanf("%d",&a);
if(a>=0 && a<=count)
{
printf("Found in index %d - %d",a,s[a]);
}
else
{
printf("Not found");
}
}
return 0;
}