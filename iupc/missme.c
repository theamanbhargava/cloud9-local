#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define size 100
#include <stdlib.h>

int primecheck(int);
int highprime(int[], int);      //call for highprime with array and its size
                                //array should be the modified array with only primes

int main()
{
    int n, m, i, j, k = 0, l = 0, flag = 0, o = 0, arr[size][size], arr1[size] = {0}, max, arr2[size]; //highprime is highest prime, count is number of prime numbers
    char c;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        while(1){
            c = getchar();
            if(c == '\n')
                break;
            else 
                if(isalpha(c)){
                    if(flag == 1){
                        k++;
                        for(j = 0; j < l; j++){
                            arr1[k] = arr1[k] + arr[k][j] * pow(10,l-j-1);
                        }
                        l = 0;
                    }
                    flag = 0;
                    continue;
                }
                else{
                    arr[k][l] = atoi(&c);
                    l++;
                    flag = 1;
                }    
        }
        for(m = 0; m < k; m++){
            if(primecheck(arr1[m])){
                arr2[o] = arr1[m];
                o++;
                
            }    
        }
        max = highprime(arr2, o);
        printf("%d %d\n", o, max);
    }
}


//checks whether the passed number is passed or not
int primecheck(int a)
{
    //int root = (int)sqrt(a);
    for(int i=2; i<a/2; i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
    
}


//iterates through the
int highprime(int array[], int size1)
{
    int i, max;
    max = array[0];
    for(i=0; i<size1; i++)
    {
        if(array[i]>max)
        {
            max= array[i];
        }
    }
    
return max;
}