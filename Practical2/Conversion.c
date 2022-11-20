#include <stdio.h>
#include <math.h>

int main(void) {

/* Declare variables */
   int i,num,temp,numdigits;
   float fnum;
   char binnum[60];

    printf("Enter a numeric digit: \n ");
    scanf("%d",&num);

/* Intialise 4-byte integer */
   //num = 33554431;
/* Convert to 4-byte float */
   fnum = (float) num;


/* Convert to binary number (string)*/
   i = 0; 
   temp = num;
   //while loop to process all elements and convert to binary
   while (temp > 0) 
   {
     sprintf(&binnum[i],"%1d",temp%2);
     temp = temp/2;
     i++;
   }

/* Terminate the string */
   binnum[i] = '\0';
       

/* Completing the code for calculations */
      numdigits = ceil(logf(fnum)/logf(2));
     
      printf("The number of digits is %d\n",numdigits);
      printf("Number is: num=%d,  Floating number is: fnum=%f, num in binary=%s\n",num,fnum,binnum);

}
