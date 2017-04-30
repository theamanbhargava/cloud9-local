/*Function to generte nth prime number*/

#include <stdio.h>

#define SIZE 10000

int main(void)
{   
    long long n, array[SIZE], i;
    printf("\nEnter number: ");
    scanf("%lld", &n);
    array[0]=1;
    array[1]=2;
    array[2]=3;
    
    for(i=3; i<n; i++)
        array[i+1]=array[i]+array[i-1];
        
    printf("\nElement is : %lld", array[i]);
    
    
}