#include<stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   printf("\n");

   int a[n][n], b[n][n], r[n][n];

   for(int i=0; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
           scanf("%d", &a[i][j]); //Matrix A
       }
   }
   printf("\n");

    for(int i=0; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
           scanf("%d", &b[i][j]); //Matrix B
       }
   }
   printf("\n");

    for(int i=0; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
            r[i][j]=0; //Must be "r" equal to zero.
            for(int k=0; k<n; k++) //"k" is must
            {
                r[i][j]+=a[i][k]*b[k][j];  //Formula of matrix multi.
            }
       }
   }

    for(int i=0; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
           printf("%d ", r[i][j]); //Result
       }
       printf("\n");
   }

   return 0;
}

