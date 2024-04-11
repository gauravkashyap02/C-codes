#include<stdio.h>
int main(){
    int n;
    printf("Enter the array size :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements :");
    int product=1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        product=product*arr[i];
    }
         printf("Product is %d\n",product);
    
    return 0;
}