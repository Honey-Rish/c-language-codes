/*matrix addition of two numbers(3*3)*/
#include<stdio.h>
int main()
{
  int a[3][3],b[3][3],i,j;
  srand(time(0));
  //fill and print matrix A
   printf("matrix A \n");
    for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)

 {
   a[i][j]=rand()%10;
    printf("%5d",a[i][j]);

 }
    printf("\n");
 }
 //fill and print matrix B
   printf("matrixB\n");
    for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)

 {
   b[i][j]=rand()%10;
     printf("%5d",b[i][j]);
 }
    printf("\n");
 }
   printf("matrix addition[A+B]/n");
    for(i-0;i<3;i++)
    {
     for(j=0;j<3;j++);
     {
    printf("\n%5d",a[i][j]+b[i][j]);
     }
     printf("\n");
    }

    }





