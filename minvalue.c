#include<stdio.h>
int main(){
    int a;
    printf("Enter Your Array Size :");
    scanf("%d",&a);
    int min = 99999;
    int arr[a];
    printf("Enter Your Elements :");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if(min>arr[i]){
            min=arr[i];
        }
    }
        printf("min is %d ",min);

    return 0;
}