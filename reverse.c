#include<stdio.h>
int main(){
    int a;
    printf("Enter your array size :");
    scanf("%d",&a);
    int arr[a];
    int brr[a];
    printf("Enter your elements :");
    for(int i=0;i<a;i++){
        scanf("%d%d",&arr[i],&brr[i]);
        brr[i]=arr[a-1-i];
    }
        for(int i=0;i<a;i++){
            printf("%d",brr[i]);
        }
        return 0;
}