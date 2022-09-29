//Lagrange Interpolatiopn
#include <stdio.h>

int main()
{
    printf("Enter the no of observation : \n");
    int n;
    scanf("%d",&n);
    
    float x[n],y[n],X;
    printf("Enter the value of observation : \nx y\n");
    for(int i=0;i<n;i++)
      scanf("%f %f",&x[i],&y[i]);
    
    
    
    printf("Enter X : \n");
    scanf("%f",&X);
    
    
    float Y=0,k=1;
     printf("\nIntermidiate Values:\n");
    for(int i=0;i<n;i++)
       {
           k=1;
           for(int j=0;j<n;j++)
           {
               if(i!=j)
               {
                   k = k* ((X-x[j])/(x[i]-x[j]));
                   
               }
               
           }
           k = k*y[i];
           printf("%f  ",k);
           Y += k;
       }
      
      printf("\nSolution is : %f",Y);
    return 0;
}



///////////////////////OUTPUT///////////////////
Enter the no of observation : 
4
Enter the value of observation : 
x y
1 1 
2 5
7 5
8 4
Enter X : 
6

Intermidiate Values:
-0.190476  1.666667  6.666667  -1.904762  
Solution is : 6.238095

...Program finished with exit code 0
Press ENTER to exit console.
