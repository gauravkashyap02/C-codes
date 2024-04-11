#include<stdio.h>
int main(){
    int n;
    printf("Enter Your Array Size :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Your Elements :");
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}