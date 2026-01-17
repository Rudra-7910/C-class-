#include <stdio.h>
void printMaxMin(int arr[],int n,int *max, int *min)
{
    *max=*min=arr[0];
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>*max)
            *max=arr[i];
        else if ( arr[i]<*min)
            *min=arr[i];
    }
}
int main() {
    int big,small;
    int numbers[5];
    printf("enter the numbers\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&numbers[i]);
    }
    printMaxMin(numbers,5,&big,&small);
    printf("largest=%d\n",big);
    printf("rudra");
    printf("smalllest is %d\n",small);
    return 0;
}
