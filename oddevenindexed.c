#include<stdio.h>
int main(){
    int a;
    printf("Enter Your array size :");
    scanf("%d",&a);
    int arr[a];
    printf("Enter your elements :");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if(i%2!=0){
        arr[i]=arr[i]*2;
        }
        else{
            arr[i]=arr[i]+10;
        }
    }
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
return 0;
}