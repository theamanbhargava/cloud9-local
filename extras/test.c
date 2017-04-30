#include <stdio.h>

 
int main()
{
    int a[50],j,i;
    printf("How many elements?");
    scanf("%d",&j);
    printf("\nEnter array elements:");
    
    for(i=0;i<j;i++)
        scanf("%d",&a[i]);
    int max = a[0];
    for(i=0; i<j; i++)
    {
        if(a[i]>max)
        {
            max= a[i];
        }
    }
printf("\nmax is : %d", max);
}