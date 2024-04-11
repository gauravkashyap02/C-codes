#include<stdio.h>
int main(){
    int key;
    printf("Enter Your Key Value :");
    scanf("%d",&key);
    int n;
    printf("Enter Your Array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter your Elements :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    
        if(arr[i]==key){
            printf("%d index of element is present in array\n",arr[i]);
        }
        else{
            printf("Index is not present in array\n");
        }
    }
    return 0;
}