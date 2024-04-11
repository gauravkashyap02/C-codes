#include<stdio.h>
int main(){
    int a;
    printf("Enter Your Array Size :");
    scanf("%d",&a);
    int max = -99999;
    int arr[a];
    printf("Enter Your Elements :");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if(max<arr[i]){
            max=arr[i];
        }
    }
        printf("max is %d ",max);

    return 0;
}