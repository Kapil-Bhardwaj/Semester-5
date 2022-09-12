// program to demonstrate Gauss Elemination Method in a generalized way

#include<stdio.h>
#include<math.h>

void main()
{
   int n;
   scanf("%d",&n);
   
   
   float mat[n+1][n+2];
   //take coffiient
   for(int i=0;i<n;i++)
      for(int j=0;j<=n;j++)
         scanf("%f",&mat[i][j]);
  
 // make it  upper triangular
   for(int i=0;i<n;i++)
     for(int j=i+1;j<n;j++)
     {
        float t = mat[j][i]/mat[i][i];
         for(int k =0;k<=n;k++)
         {
            mat[j][k] = mat[j][k] - t*mat[i][k];	
         }
     }  
     for(int i=0;i<n;i++)
     {for(int j=0;j<=n;j++)
         printf("%f ",mat[i][j]);
           printf("\n");
      }   
  
  // find the value of variables
     float x[n+1] ;
     x[n-1] = mat[n-1][n]/mat[n-1][n-1] ;
     for(int i=n-2;i>=0;i--)
     {
         float sol = 0 ;
         for(int j=n-1;j>=i;j--)
         {
            sol += x[j]*mat[i][j]; 
        }
        sol =  mat[i][n] - sol;
        x[i] = sol / mat[i][i] ;
     }
       
      // printing the variables values 
   for(int i=0;i<n;i++)
   {
       printf("%f   ",x[i]);
   }
}
