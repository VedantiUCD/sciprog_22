# include <stdio.h>
# include <math.h>

int main(void)
{
    int N=12,loopvar;
    float a=0.00, b_deg=60.00;
    float b_rad, multrad,final_area;

    //convert degree to radian for tan function calculation
    //Given b_deg= pi/3
    b_rad = ( M_PI * b_deg )/180;
    printf(" Radian value of b %f ",b_rad);

    //Adding first and last elements of function f(x0) and f(Xn)
    final_area = tan(a)+tan(b_rad);

    //calculating remaining function values using loop
    for (loopvar=0; loopvar<60; loopvar=loopvar+5)
    {
        final_area = final_area + (2*tan((M_PI * loopvar)/180));

    }
   // printf("\n test : %f", final_area);

    // multiplying b−a/2N
    multrad = (M_PI *(b_deg/(2*N)))/180;
    final_area = multrad * final_area;

    //Checking the function value vs log fun value
    printf("\n Aprox calculated value : %f",final_area);
    printf("\n Log function value: %f",log(2.0));

    //From the results we can see that our approximated values are close to actual log values.

return 0;

}