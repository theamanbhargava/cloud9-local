#include <stdio.h>
#define size 400

int main()
{
    int n, j, k, i, pos, arr[size];
    char c;
    scanf("%d", &n);
    scanf("%c", &c);
        for(i = 0; i < n; i++){
            scanf("%d", &j);
            scanf("%c", &c);
            for(k = 0; k < j; k++){
                scanf("%d", &arr[k]);
            }
            int max = arr[0];
            for(i=0; i<j; i++)
            {
                if(arr[i]>max)
                {
                    max= arr[i];
                    pos = i;
                }
            }
            printf("%d\n", (j -pos -1));
        }
    
    
    
}

