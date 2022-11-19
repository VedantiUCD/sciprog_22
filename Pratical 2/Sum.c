#include <stdio.h>


int main(void) {
/* Declare variables */
   int i;
   float sum1, sum2, diff;
   

/* First sum */
   sum1 = 0.0;
   for (i=1; i<=1000; i++) {
      //calculating the sum using the equation provided when loop variable is in ascending order
      sum1=sum1+(1/(float)i);
   }


/* Second sum */
   sum2 = 0.0;
   for (i=1000; i>0; i--) {
       //calculating the sum using the equation provided when loop variable is in descending order
      sum2=sum2+(1/(float)i);
   }

   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

/* Find the difference */
   diff = sum1-sum2;
   printf(" Difference between the two is %f\n",diff);
   //There is a difference between sum 1 and sum2  = 0.000007
   if(sum1!=sum2)
   {
      printf(" Results for both summation are not same");
   }
   
}
