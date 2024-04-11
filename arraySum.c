#include<stdio.h>
int main(){
    int n;
    printf("Enter the array size :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements :");
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
         printf("Sum is %d\n",sum);
    
    return 0;
}