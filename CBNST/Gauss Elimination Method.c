
Practical No.7

NAME: Kapil Kumar Bhardwaj
COURSE: B.Tech 5th Sem
BRANCH: CSE
ROLL NO: 2094030

OBJECTIVE: WAP to find root of equation using Gauss Elemination Method.

ALGORITHM:
	
 // make it  upper triangular	
   for(i 0  n)
     for(j i+1  n)
     {
        t = mat[j][i]/mat[i][i];
         for( k 0 -> n )
         {
            mat[j][k] = mat[j][k] - t*mat[i][k];	
         }
     }  
   for(i 0  n)
     for(j i+1  n)
         printf("%f ",mat[i][j]);
           printf("\n");

  
  // find the value of variables

     x[n-1] = mat[n-1][n]/mat[n-1][n-1] ;
     for(i n-2  0)
     {
         float sol = 0 ;
         for( j=n-1  n)
         {
            sol += x[j]*mat[i][j]; 

        }	
        sol =  mat[i][n] - sol;	
        x[i] = sol / mat[i][i] ;	
     }	
	
      // printing the variables values 	
for(i 0  n)	   
printf("%f   ",x[i]);	
Program:


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

Output:
Enter No. of Equations : 
3
Enter The values of coffiients : 
1 1 2 4 
3 1 -3 -4
2 -3 -5 -5

Printing Values after Making UpperTriangular Matrix : 


1.000000 1.000000 2.000000 4.000000 
0.000000 -2.000000 -9.000000 -16.000000 
0.000000 0.000000 13.500000 27.000000 

Value of the variables are : 

1.000000   -1.000000   2.000000   
