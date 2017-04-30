#include <stdio.h>

int lcm(int , int);
int gcd(int, int);

int main()
{   
    int i, cases, n, m, count, req;
    scanf("%d", &cases);
    do
    {   req = 1;
        count = 1;
        cases--;
        scanf("%d", &n);    //takes input of n
        scanf("%d", &m);    //takes input of m
    
        for(i=2; i<=sqrt(n)||i==n; i++)
        {
            if(n%i==0)
            {   count++;
                req = lcm(req, i);
                if(req >= m){
                    break;
                }
                else
                    continue;
            }
        }
        printf("%d\n", count);
    
    
    }
    while(cases>0);
}

int gcd(int a, int b)
{
  if (b == 0) return a;
  return gcd(b, a%b);
}

int lcm(int a, int b)
{
    int req = a*b/gcd(a,b);
    return req;
}