#include<stdio.h>
#include<math.h>
#define f(x) x*x -2

int main(){
    int iter=1;
    float a, b, c, allerr;
    printf("Enter the initial guess a(negative): ");
    scanf(" %f", &a);
    printf("Enter the initial guess b(positive): ");
    scanf(" %f", &b);
    printf("Enter the allowed error: ");
    scanf(" %f", &allerr);
    printf("\n\na\t\tb\t\tf(a)\t\tf(b)\tc=a- f(a)(b-a)/f(b)-f(a)\tf(c)\n\n");

    do
    {
        /* code */
        float f_b= f(b);
        float f_a= f(a);
        c= a- f_a*(b-a)/(f_b-f_a);

        // printf("\n\na\t\tb\t\tf(a)\t\tf(b)\tc=a- f(a)(b-a)/f(b)-f(a)\tf(c)\n\n");
        printf("%f\t%f\t%f\t%f\t%f\t\t%f\n", a, b, f(a), f(b), c, f(c));

        if(f(c)<0){
            a=c;
        }
        else{
            b=c;
        }

        iter++;
    // } while (iter<2);
    } while (fabs(f(c)) >allerr);
    
    printf("The root of the equation is %f\n", c);

    return 0;
}
///////////////////////////////////
// Enter the initial guess a(negative): -2
// Enter the initial guess b(positive): 5
// Enter the allowed error: 0.0001


// a		b		f(a)		f(b)	c=a- f(a)(b-a)/f(b)-f(a)f(c)

// -2.000000	5.000000	2.000000	23.000000	-2.666667	5.111112
// -2.000000	-2.666667	2.000000	5.111112	-1.571429	0.469388
// -2.000000	-1.571429	2.000000	0.469388	-1.440000	0.073600
// -2.000000	-1.440000	2.000000	0.073600	-1.418605	0.012439
// -2.000000	-1.418605	2.000000	0.012439	-1.414966	0.002129
// -2.000000	-1.414966	2.000000	0.002129	-1.414343	0.000365
// -2.000000	-1.414343	2.000000	0.000365	-1.414236	0.000063
// The root of the equation is -1.414236
