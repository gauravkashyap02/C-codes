#include<stdio.h>
int main(){
    int a;
    printf("Enter Your Array Size :");
    scanf("%d",&a);
    int arr[a];
    int max=-99999;
    int smax=-99999;
    printf("Enter your elements :");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if(max<arr[i]){
            max=arr[i];
        }
    }
        for(int i=0;i<a;i++){
            if(arr[i]!=max && smax<arr[i]){
                smax=arr[i];
            }
        }
    printf("second max is %d",smax);
    return 0;
}