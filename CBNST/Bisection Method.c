// wap to demonstrate Bisection method

#include<stdio.h>
#include<math.h>

#define f(x) x*x*x - 6

int main(){
  
    int iter=1;
    float a, b, c, allerr;
    printf("Enter the value of a(negative): ");
    scanf(" %f", &a);
    printf("Enter the value of b(positive): ");
    scanf(" %f", &b);
    printf("Enter the value of allowed error: ");
    scanf(" %f", &allerr);

    printf("\n\na\t\tb\t\tf(a)\t\tf(b)\t\tc=(a+b)/2\t\tf(c)\n\n");

    do{
        c= (a+b)/2;
        printf("%f\t%f\t%f\t%f\t%f\t%f\n", a, b, f(a), f(b), c, f(c));
        if(f(c)<0){
            a=c;
        }
        else{
            b=c;
        }

    }while(fabs(f(c))>allerr);

    printf("\n\nThe root is: %f\n", c);

    return 0;
}

////////////////////////////////////
// Enter the value of a(negative): 1 6 0.0001
// Enter the value of b(positive): Enter the value of allowed error: 

// a		b		f(a)		f(b)		c=(a+b)/2		f(c)

// 1.000000	6.000000	-5.000000	210.000000	3.500000	36.875000
// 1.000000	3.500000	-5.000000	36.875000	2.250000	5.390625
// 1.000000	2.250000	-5.000000	5.390625	1.625000	-1.708984
// 1.625000	2.250000	-1.708984	5.390625	1.937500	1.273193
// 1.625000	1.937500	-1.708984	1.273193	1.781250	-0.348358
// 1.781250	1.937500	-0.348358	1.273193	1.859375	0.428371
// 1.781250	1.859375	-0.348358	0.428371	1.820312	0.031674
// 1.781250	1.820312	-0.348358	0.031674	1.800781	-0.160403
// 1.800781	1.820312	-0.160403	0.031674	1.810547	-0.064883
// 1.810547	1.820312	-0.064883	0.031674	1.815430	-0.016734
// 1.815430	1.820312	-0.016734	0.031674	1.817871	0.007437
// 1.815430	1.817871	-0.016734	0.007437	1.816650	-0.004657
// 1.816650	1.817871	-0.004657	0.007437	1.817261	0.001389
// 1.816650	1.817261	-0.004657	0.001389	1.816956	-0.001635
// 1.816956	1.817261	-0.001635	0.001389	1.817108	-0.000123
// 1.817108	1.817261	-0.000123	0.001389	1.817184	0.000633
// 1.817108	1.817184	-0.000123	0.000633	1.817146	0.000255
// 1.817108	1.817146	-0.000123	0.000255	1.817127	0.000066


// The root is: 1.817127
