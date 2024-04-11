#include<stdio.h>
int main(){
    int a;
    printf("Enter your array size :");
    scanf("%d",&a);
    int arr[a];
    int max=-99999;
    int smax=-99999;
    printf("Enter your elements :");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
        if(max<arr[i]){
            smax=max; //smax is now previous max
            max=arr[i]; //max is now a new max
        }
        else if(smax<arr[i] && max!=arr[i]){ //max > arr[i]
             smax=arr[i];
        } 
    }
    printf("Second max is %d",smax);
    return 0;
}