#include <stdio.h>
int main()
{
float a[3][3],b[3][3],c[3][3],d;
printf("Enter the elements\n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
scanf("%f",&a[i][j]);
b[i][j]=a[i][j];
}
}
c[0][0]=((b[1][1]*b[2][2])-(b[2][1]*b[1][2]));
c[0][1]=(-1)*((b[1][0]*b[2][2])-(b[2][0]*b[1][2]));
c[0][2]=((b[1][0]*b[2][1])-(b[2][0]*b[1][1]));
c[1][0]=(-1)*((b[0][1]*b[2][2])-(b[2][1]*b[0][2]));
c[1][1]=((b[0][0]*b[2][2])-(b[2][0]*b[0][2]));
c[1][2]=(-1)*((b[0][0]*b[2][1])-(b[2][0]*b[0][1]));
c[2][0]=((b[0][1]*b[1][2])-(b[1][1]*b[0][2]));
c[2][1]=(-1)*((b[0][0]*b[1][2])-(b[1][0]*b[0][2]));
c[2][2]=((b[0][0]*b[1][1])-(b[1][0]*b[0][1]));
d=(b[0][0]*c[0][0])+(b[0][1]*c[0][1])+(b[0][2]*c[0][2]);
if(d==0)
{
printf("Given matrix is a singluar matrix.Hence, it is notinvertible.");
return 0;
}
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
c[i][j]=c[i][j]/d;
}
}
printf("Inverse of given matrix is:\n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
printf("%.2f ",c[i][j]);
}
printf("\n");
}
return 0;
}
