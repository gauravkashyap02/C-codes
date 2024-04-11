#include<stdio.h>
int main(){
    int n;
    printf("Enter the array size :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[i]%2!=0){
        printf("Odd is %d\n",arr[i]);
    }
}
        return 0;
}
    