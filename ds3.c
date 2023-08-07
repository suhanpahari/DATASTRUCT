#include <stdio.h>
#include <stdlib.h>
int* get(int n)
{
int *a=malloc(n*sizeof(int));
if (a==NULL)
{
printf("Error: could not allocate memory\n");
return NULL;
}
printf("Enter the elements of array: ");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
return a;
}
int main()
{
int *array, n;
printf("Enter size of array:");
scanf("%d",&n);
array=get(n);
if (array != NULL)
{
for(int i=0;i<n;i++)
{
printf("%d ",array[i]);
}
free(array);
}
return 0;
}