#include<stdio.h>
int main(){
    int a;
    printf("Enter your array size :");
    scanf("%d",&a);
    int arr[a];
    int x;
    printf("Enter Your Integer :");
    scanf("%d",&x);
    printf("Enter your Elements :");
       int count =0;

    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>x){
            count =count+1;
        }
    }
        printf("%d ",count);
    
    return 0;
}