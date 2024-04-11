#include<stdio.h>
int main(){
    int a;
    printf("Enter Your Array Size :");
    scanf("%d",&a);
    int arr[a];
    int min=99999;
    int smin=99999;
    printf("Enter your elements :");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if(min>arr[i]){
            min=arr[i];
        }
    }
        for(int i=0;i<a;i++){
            if(arr[i]!=min && smin>arr[i]){
                smin=arr[i];
            }
        }
    printf("second min is %d",smin);
    return 0;
}