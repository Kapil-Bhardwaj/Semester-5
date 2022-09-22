#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define f(x) x *x *x - 2 * x + 1
#define f_dash(x) 3*x*x - 2

int main()
{
    int iter = 1;
    float a, b, c, allerr;
    printf("Enter the initial guess a: ");
    scanf(" %f", &a);
    
    

    printf("Enter the allowed error: ");
    scanf(" %f", &allerr);
    printf("\n\na\t\tf(a)\t\tf_dash(a)\tc= a- f(a)/f_dash(a)\n\n");

    do
    {
        /* code */
        float fa= f(a);
        float f_dasha= f_dash(a);
        c = a- fa/f_dasha;

        // printf("\n\na\t\tb\t\tf(a)\t\tf(b)\tc=a- f(a)(b-a)/f(b)-f(a)\tf(c)\n\n");
        printf("%f\t%f\t%f\t%f\n", a, f(a), f_dash(a), c);
        a = c;

        iter++;
        // } while (iter<2);
    } while (fabs(f(c)) > allerr);

    printf("The root of the equation is %f\n", c);

    return 0;
}
//////////////////////////////////////////////////////
Enter the initial guess a: 8
// Enter the allowed error: 0.0001


// a		f(a)		f_dash(a)	c= a- f(a)/f_dash(a)

// 8.000000	497.000000	190.000000	5.384211
// 5.384211	146.318359	84.969170	3.662194
// 3.662194	42.791714	38.234985	2.543016
// 2.543016	12.359484	17.400797	1.832734
// 1.832734	3.490527	8.076740	1.400564
// 1.400564	0.946188	3.884735	1.156998
// 1.156998	0.234813	2.015933	1.040519
// 1.040519	0.045511	1.248042	1.004053
// 1.004053	0.004103	1.024369	1.000048
// The root of the equation is 1.000048
