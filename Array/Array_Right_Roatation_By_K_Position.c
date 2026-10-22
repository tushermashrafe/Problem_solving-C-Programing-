#include<stdio.h>
int main()
{
int size,k;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elements:\n",size);
    for(int i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("Enter the rotation value:\n");
    scanf("%d",&k);
    if(k>size)
    {
        k=k%size;
    }
    printf("Original Array:\n");
    for(int i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
    
    for(int i=0;i<k;i++)
        {
            int temp=arr[size-1];
            for(int j=size-1;j>0;j--)
                {
                    arr[j]=arr[j-1];
                }
            arr[0]=temp;
            
        }
    printf("\nRotated Array:\n");
    for(int j=0;j<size;j++)
        {
            printf("%d ",arr[j]);
        }
    


    return 0;
}
