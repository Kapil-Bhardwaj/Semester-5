
#include <stdio.h>

int main()
{
      int n;
    printf("Enter the number of unkonwn:  ");
    scanf("%d",&n);
    
    float mat[n][n+1];
    
    printf("\nEnter the coeffients:\n ");
    for(int i=0;i<n;i++)
      { for(int j=0;j<=n;j++)
           scanf("%f",&mat[i][j]);
          
      }
           
    printf("\nThe input matrix is \n");
    for(int i=0;i<n;i++)
       {for(int j=0;j<=n;j++)
           printf("%f ",mat[i][j]);
           printf("\n");
       }

         // diagoanl
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<=n;j++)
             {
                 if(j!=i)
                 {
                    float t = mat[j][i]/mat[i][i];
                    for(int k=0;k<=n;k++)
                    {
                        mat[j][k] -= t*mat[i][k]; 
                    }
                 }
             }
         }
  printf("\nThe Diogan matrix is \n");
    for(int i=0;i<n;i++)
       {for(int j=0;j<=n;j++)
           printf("%f ",mat[i][j]);
           printf("\n");
       }
       
       printf("The solution is: \n");
       
       for(int i=0;i<n;i++)
       {
           printf("\t x[%d] is : %f\n",i,mat[i][3]/mat[i][i]);
       }
       
    return 0;
}
//  1 1 1 4
// 3 1 -3 -4
// 2 -3 -5 -5

// Enter the number of unkonwn:  3

// Enter the coeffients:
//   1 1 1 4
// 3 1 -3 -4
// 2 -3 -5 -5

// The input matrix is 
// 1.000000 1.000000 1.000000 4.000000 
// 3.000000 1.000000 -3.000000 -4.000000 
// 2.000000 -3.000000 -5.000000 -5.000000 

// The Diogan matrix is 
// 1.000000 0.000000 0.000000 2.750000 
// 0.000000 -2.000000 0.000000 4.250000 
// 0.000000 0.000000 8.000000 27.000000 
// The solution is: 
//          x[0] is : 2.750000
//          x[1] is : -2.125000
//          x[2] is : 3.375000
