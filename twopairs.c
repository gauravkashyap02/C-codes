#include<stdio.h>
int main(){
    int a;
    printf("Enter your array size :");
    scanf("%d",&a);
    int arr[a];
    int x;
    printf("Enter Your Integer");
    scanf("%d",&x);

    printf("Enter your elements :");
     int count=0;
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
        for(int i=0;i<a;i++){
            for(int j=i+1;j<a;j++){
                if(arr[i]+arr[j]==x){
                    count=count+1;
                    printf("(%d,%d)\n",arr[i],arr[j]);
                }
            }
        }
        printf("%d ",count);

    return 0;
}