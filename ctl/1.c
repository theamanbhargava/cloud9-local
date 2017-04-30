#include <stdio.h>
 
int main()
{
    long long arr[1000000], freq[1000000];
    long long size, i, j, count;
 
    /*
     * Read size of array and elements in array
     */
    //prlong longf("Enter size of array: ");
    scanf("%lld", &size);
 
    //prlong longf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%lld", &arr[i]);
        freq[i] = -1;
    }
 
    /*
     * Counts frequency of each element
     */
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
 
        if(freq[i]!=0)
        {
            freq[i] = count;
        }
    }
 
    /*
     * Prlong longs frequency of each element
     */
    //prlong longf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(freq[i]!=0)
        {
            printf("%lld %lld\n", arr[i], freq[i]);
        }
    }
 
    return 0;
} 