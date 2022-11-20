#include <stdio.h>
#include <math.h>

float degrad(float theta);
float trap(float a, float b,int N,float function_array[N+1]);

int main(void)
{
    int N=12,i=0;
    float start = 0 , end = 60 ,step_size = (end - start)/ N , tan_arr[N+1];

    for(i = 0; i <= N; i++)
    {
        tan_arr[i]=tan(degrad(step_size * i));
    }
    float ans =trap(degrad(start),degrad(end),N, tan_arr);
    printf("The approx answer is %f\n", ans);
    printf("Actual value is %f \n",logf(2));

return 0;
}

float degrad(float theta)
{
    return (M_PI * theta) / 180;
}

float trap(float a, float b,int N,float function_array[N+1])
{
    float sum = function_array[0]+function_array[N];
    int i = 0;
    for (i=1;i<N;i++)
    {
        sum += 2 * (function_array[i]);
    }
    return (b-a)*(sum)/(2*N);
}