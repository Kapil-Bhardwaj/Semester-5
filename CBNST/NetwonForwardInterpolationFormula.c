
Practical No.7

NAME: Kapil Kumar Bhardwaj
COURSE: B.Tech 5th Sem
BRANCH: CSE
ROLL NO: 2094030

OBJECTIVE: WAP to Demonstrate Newton Forword Interpolation Formula

ALGORITHM: 
make table of difrence
      int count = n;
      for(int i=2;i<n+1;i++)
      {
          for(int j=0;j<count-1;j++)
          {
              IM[j][i] = IM[j+1][i-1]-IM[j][i-1];
          }
          count--;
      }      
       
    input x
      float x;
      printf("Input the value of X: ");
      scanf("%f",&x);
      
      //step 6: find p =(x - IM[0][0])/(IM[0][0]-m[0][1]);
      
      float p;
      p = (x-IM[0][0])/(IM[1][0]-IM[0][0]);
      
      printf(" p corresponding to %f is %f :\n\n\n",x,p);
      
      // Apply the formulae
      float t = p;
      float y = IM[0][1],k=1;
      for(int i=2;i<n+1;i++)
      {
          y += (p*IM[0][i])/k;
          p = p*(t-(i-1));
          
          k=k*i;
      }
      printf("ans : %f",y);
    return 0;
}
Program:

#include <stdio.h>
	

	int main()
	{
	     // step 1. take input 
	    printf("Enter No. of Observation : ");
	    int n;
	    scanf("%d",&n);
	    
	     // step: 2 .. take values
	      float IM[n][n+1];
	      printf("Enter x    y :\n");
	      for(int i=0;i<n;i++)
	      {
	          scanf("%f%f",&IM[i][0],&IM[i][1]);
	      }
	      
	      //step 3: make table of difrence
	      int count = n;
	      
	      
	      for(int i=2;i<n+1;i++)
	      {
	          for(int j=0;j<count-1;j++)
	          {
	              IM[j][i] = IM[j+1][i-1]-IM[j][i-1];
	              
	          }
	          count--;
	      }
	      
	      
	      // step: 4 print table
	      count = n;
	      for(int i=0;i<n;i++)
	      {
	          for(int j=0;j<count+1;j++)
	          {
	              printf("%f ",IM[i][j]);
	              
	          }
	          count--;
	          printf("\n");
	          
	      }
	       
	      //step 5: imput x
	      float x;
	      printf("Input the value of X: ");
	      scanf("%f",&x);
	      
	      //step 6: find p =(x - IM[0][0])/(IM[0][0]-m[0][1]);
	      
	      float p;
	      p = (x-IM[0][0])/(IM[1][0]-IM[0][0]);
	      
	      printf(" p corresponding to %f is %f :\n\n\n",x,p);
	      
	      // step 7: Apply the formulae
	      float t = p;
	      float y = IM[0][1],k=1;
	      for(int i=2;i<n+1;i++)
	      {
	          y += (p*IM[0][i])/k;
	          p = p*(t-(i-1));
	          
	          k=k*i;
	      }
	      printf("ans : %f",y);
	    return 0;
	}
	


OUTPUT: 
Enter No. of Observation : 6
Enter x    y :
2.5 24.145
3.0 22.043
3.5 20.225
4.0 18.644
4.5 17.262
5.0 16.042
2.500000 24.145000 -2.102001 0.284002 -0.047005 0.009008 -0.008013 
3.000000 22.042999 -1.817999 0.236998 -0.037996 0.000996 
3.500000 20.225000 -1.581001 0.199001 -0.037001 
4.000000 18.643999 -1.382000 0.162001 
4.500000 17.261999 -1.219999 
5.000000 16.042000 
Input the value of X: 3.75
 p corresponding to 3.750000 is 2.500000 :


ans : 19.407370
