#include <stdio.h>
 
void quick_sort(int[],int,int);
int partition(int[],int,int);
 
int main()
{
    int a[50],n,i;
    printf("How many elements?");
    scanf("%d",&n);
    printf("\nEnter array elements:");
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    quick_sort(a,0,n-1);
    printf("\nArray after sorting:");
    
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    return 0;        
}
 
void quick_sort(int a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        //call quick sort for first partition
        quick_sort(a,l,j-1);
        //call quick sort for second partition
        quick_sort(a,j+1,u);
    }
}
 
int partition(int a[],int low,int high)
{
    int pivot,i,j,temp;
    pivot=a[low];
    i=low;
    j=high+1;
    //printf("\n%d",i);
    //printf("\n%d", a[j]);
    do
    {
        do  //increase index of low number
        {
            i++;
            //printf("\n%d", i);
        }
        //check if low is less than pivot and index is less than the index of high    
        while(a[i]<pivot&&i<=high);
        
        //decrease index of high number
        do
        {    
            j--;
            //printf("\nj is now : %d", j);
        }
        //pivot is less than high
        while(pivot<a[j]);
        
        if(i<j)
        {   //swap low and high
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    
    a[low]=a[j];
    a[j]=pivot;
    
    return(j);
}