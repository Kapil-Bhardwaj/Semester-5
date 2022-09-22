#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define f(x) x *x *x - 2 * x + 1

int main()
{
    int iter = 1;
    float a, b, c, allerr;
    printf("Enter the initial guess a: ");
    scanf(" %f", &a);

    printf("Enter the initial guess b: ");
    scanf(" %f", &b);

    printf("Enter the allowed error: ");
    scanf(" %f", &allerr);
    printf("\n\na\t\tb\t\tf(a)\t\tf(b)\tc= a- f(a)(b-a)/(f(a)-f(b)\n\n");

    do
    {
        /* code */
        float fa = f(a);
        float fb = f(b);
        c = a -fa*(b-a)/(fb-fa);

        // printf("\n\na\t\tb\t\tf(a)\t\tf(b)\tc=a- f(a)(b-a)/f(b)-f(a)\tf(c)\n\n");
        printf("%f\t%f\t%f\t%f\t%f\n", a, b, f(a), f(b), c);
        a = b;
        b = c;

        iter++;
        // } while (iter<2);
    } while (fabs(f(c)) > allerr);

    printf("The root of the equation is %f\n", c);

    return 0;
}
/////////////////////////
// Enter the initial guess a: 0
// Enter the initial guess b: 9
// Enter the allowed error: 0.0001


// a		b		f(a)		f(b)	c= a- f(a)(b-a)/(f(a)-f(b)

// 0.000000	9.000000	1.000000	712.000000	-0.012658
// 9.000000	-0.012658	712.000000	1.025314	-0.025656
// -0.012658	-0.025656	1.025314	1.051295	0.500293
// -0.025656	0.500293	1.051295	0.124633	0.571032
// 0.500293	0.571032	0.124633	0.044137	0.609818
// 0.571032	0.609818	0.044137	0.007142	0.617306
// 0.609818	0.617306	0.007142	0.000623	0.618021
// The root of the equation is 0.618021
