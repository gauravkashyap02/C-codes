#include <stdio.h>
//ye function input legaa array me
void takeInput(int arr[],int size){
    printf("Enter %d elements:\n",size);
    for(int i=0;i<size;i++){
        printf("Element %d:",i+1);
         scanf("%d",&arr[i]);
    }
}


//ye function array ke elements ko print karegaa
void printArray(int arr[], int size)
{
    printf("Elements in the array");
    printf("Array elements are: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
       
    }
    printf("\n");
}
int main()
{
    int size;
    printf("Enter the size of the array :");
    scanf("%d",&size);

    int arr[size];
    takeInput(arr,size);
    printArray(arr,size);
    return 0;
}