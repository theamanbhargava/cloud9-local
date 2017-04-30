/*prob 2*/

#include <stdio.h>

#define SIZE 10000

int main(void)
{   
    long long n, array[SIZE], i, j, sum=0;
    //printf("\nEnter number: ");
    scanf("%lld", &n);
    //array[0]=0;
    array[0]=1;
    array[1]=2;
    array[2]=3;
    
    for(i=2; i<n; i++)
        array[i+1]=array[i]+array[i-1];
        
    //printf("\nElement is : %d", array[i]);
    
    for(j=0; j<n; j++)
        if(array[j]%2==0)
            sum+=array[j];
        
    printf("\nSum is : %lld", sum);
    
    
}