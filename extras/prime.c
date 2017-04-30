// Program to print all prime factors
# include <stdio.h>
# include <math.h>
 
// A function to print all prime factors of a given number n
void primeFactors(long long n)
{   
    long long max;
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        //printf("%d ", 2);
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (long long i = 3; i <= sqrt(n); i = i+2)
    {   
        if(n%i==0)
            max=i;
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            //printf("%d ", i);
            n = n/i;
        }
    }
 
    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2)
        printf ("\n%lld ", n);
    //printf("\n%d", max);
}
 
/* Driver program to test above function */
int main()
{
    printf("\nEnter number : ");
    long long n;
    scanf("%lld", &n);
    primeFactors(n);
    return 0;
}