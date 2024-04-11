#include<stdio.h>
    void reverse(int arr[],int si,int ei){
        for(int i=si,j=ei,i < j;i++,j--){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        return;
    }
    int main(){
        int a;
        printf("Enter Your Array Size :");
        scanf("%d",&a);
        int arr[a];
        int k;
        printf("Enter your K value :");
        scanf("%d",&k);
        k=k%a;
        reverse(arr,0,a-1);
        reverse(arr,0,k-1);
        reverse(arr,k,a-1);
        printf("Enter Your Elements :");
        for(int i=0;i<a;i++){
            scanf("%d",&arr[i]);
            printf("%d",arr[i]);
        }

     return 0;          
    }
