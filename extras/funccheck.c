#include <stdio.h>
#include <math.h>

int primecheck(int a)
{
    //int root = (int)sqrt(a);
    for(int i=2; i<a/2; i++)
    {
        if(a%i==0)
        {
            return 1;
        }
    }
    return 0;
    
}

int main()
{   
    int n;
    printf("\nEnter number : ");
    scanf("%d", &n);
    int check = primecheck(n);
    if(check == 0)
    {
        printf("\n%m");
    }
    else 
    {
        printf("\nUnsuccessful");
    }
    return 0;
}

