#include<stdio.h>
int main(){
    int a;
    printf("Enter Your Array Size :");
    scanf("%d",&a);
    int arr[a];
    printf("Enter your elements :");
    int soe=0; int soo=0;
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if(i%2==0){
            soe=soe+arr[i];
        }
        if(i%2!=0){
            soo=soo+arr[i];
        }
    }
    printf("difference of %d and %d is %d",soe,soo,soe-soo);
    return 0;
}