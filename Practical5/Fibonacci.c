# include <stdio.h>
# include <stdlib.h>

//declare function before using
void fib(int *a, int *b);

int main()
{
    // declare required variables
    int num,i;
    int fib0=0, fib1=1;

    //take to count of numbers to calculate fib sequnece
    printf ("Enter a positive number: \n");
    scanf("%d",&num);
    
    //checking if number is positive, if not then exit code
    if(num<1)
    {
        printf("The number is not positive: \n");
        exit(1);

    }

    //Printing first two numbers in sequence
    printf("The fibonacci sequence is :\n");
    printf("%d, %d, ",fib0,fib1);

    //Loop to calculate remaining sequence numbers, calls function defined
    for(i=2;i<=num;i++)
    {
        fib(&fib1,&fib0);
        printf("%d, ",fib1);

        if(((i+1)%10) == 0)
            printf("\n");
    }
    return 0;
}

//function definition for fib sequnce calculation
void fib(int *a, int *b)
{
    int next;
    next = *a + *b;

    *b = *a;
    *a = next;
}