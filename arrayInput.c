#include<stdio.h>
int main(){
    int a;
    printf("Enter Your No ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter Your Elements");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        printf("%d",arr[i]);
    }
}