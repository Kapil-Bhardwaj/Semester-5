
Practical No.4

NAME: Kapil Kumar Bhardwaj
COURSE: B.Tech 5th Sem
BRANCH: CSE
ROLL NO: 2094030

OBJECTIVE: WAP to find root of equation using iteration method.



Algo:

    do
    {
    
        printf("%f\t%f\t%f\n", a, f(a), phi(a));
        c=a;

        a=phi(a);

        iter++;
      
    } while ((fabs(f(c)) > allerr));

    printf("The root of the equation is %f\n", c);




Program : 
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#define f(x) x*x*x + x*x -1
#define phi(x) 1/ pow((1+x), 0.5)
#define phi_dash(x) 1 / 2*pow((1 + x), 1.5)

int main()
{
    int iter = 1;
    float a, c, allerr;
    printf("Enter the initial guess a: ");
    scanf(" %f", &a); // 0 and 1
    if(fabs(phi_dash(a))<1){
        printf("Can apply iteration method !!\n");
    }
    else
    {
        /* code */
        printf("Can't apply iteration method !!\n");
        exit(0);
    }
    
    
    printf("Enter the allowed error: ");
    scanf(" %f", &allerr);
    printf("\n\na\t\tf(a)\t\tphi(a)\n\n");

    do
    {
        /* code */


        // printf("\n\na\t\tb\t\tf(a)\t\tf(b)\tc=a- f(a)(b-a)/f(b)-f(a)\tf(c)\n\n");
        printf("%f\t%f\t%f\n", a, f(a), phi(a));
        c=a;

        a=phi(a);

        iter++;
        // } while (iter<2);
    } while ((fabs(f(c)) > allerr));

    printf("The root of the equation is %f\n", c);

    return 0;
}

/////////////////////////////////////////////
// Enter the initial guess a: 4
// Can apply iteration method !!
// Enter the allowed error: 0.0001


// a		f(a)		phi(a)

// 4.000000	79.000000	0.447214
// 0.447214	-0.710557	0.831254
// 0.831254	0.265365	0.738968
// 0.738968	-0.050395	0.758323
// 0.758323	0.011130	0.754138
// 0.754138	-0.002380	0.755037
// 0.755037	0.000512	0.754843
// 0.754843	-0.000110	0.754885
// 0.754885	0.000024	0.754876
// The root of the equation is 0.754885


