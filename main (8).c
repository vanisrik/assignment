/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>//header file
#include<math.h>//header file for math function
int main(void)
{
 int a[2];//vector 1
 int b[2]; //vector 2
 double c[2]; //result vector
 int n, i;
 
 /* read vectors a and b */
 printf("Enter vector size: ");
 scanf("%d", &n);
 printf("Enter elements of vector a:\n");
 for (i = 0; i < n; i++)
   scanf("%d", &a[i]);
   printf("Enter elements of vector b:\n");
   for (i = 0; i < n; i++)
    scanf("%d", &b[i]);
    /* perform vector addition */
    for (i = 0; i < n; i++)
      c[i] = a[i] + b[i];
    /* print addition vector C */
    printf("Addition vector:\n");
    for (i = 0; i < n; i++)
      printf("%.0f ", c[i]);
      int dot_product=(a[0]*b[0])+(a[1]*b[1]);
      printf("\ndot product of the vectors:%d",dot_product);
      double mag1=sqrt(pow(c[0],2));
      double mag2=sqrt(pow(c[1],2));
      double res=mag1+mag2;
      double prod=mag1*mag2;
      double d=(dot_product)/(prod);
      double result=cos(d);
      printf("\nMagnitude of the vector1:%.1f",round(mag1));
      printf("\nMagnitude of the vector2:%.1f",round(mag2));
      printf("\nMagnitude of the  product vector:%.1f",round(prod));
      printf("\n%.1f",round(d));
      printf("\nMagnitude of the  resultant vector:%.1f",round(res));
      printf("\nAngle of the resultant vector:%.2f",round(result));
      return 0;
     
}
