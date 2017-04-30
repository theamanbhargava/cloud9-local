#include <stdio.h>

int rating(int a, int b)
{
    int array[1000], q=0, sum=0, count;
    int i = a;
    for(i=2; i<b+1; i++)
    {
        for(int j=2; j<=(i/2+1); j++)
        {   
            if(i%j==0)
            {   
                count=1;
                array[q]=j;
                i=i/j;
                while(i%j==0)
                {   
                    i=i/j;
                    count++;
                }
                array[q+1]=count;
            }
            q=q+2;
        }
    }
    for(int x=0; x<q; x=x+2)
    {
        sum = sum + array[x]*array[x+1];
    }
    return sum;
}

int main(void)
{
    int t, l, r, ans;
    scanf("%d", &t); //number of test cases
    
    do
    {
        scanf("%d%d", &l, &r);
        ans = rating(l, r);
        printf("%d", ans);
        t--;
    }
    while(t>=0);
}