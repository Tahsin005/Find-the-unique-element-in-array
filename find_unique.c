#include<stdio.h>
#include<stdbool.h>
/*Find the unique number in a given array where all the
elements are being repeatd twice with one value being unique*/
int main(){
    int arr[7]={1,3,6,1,1,2,3};
    for(int i=0;i<=6;i++){
        bool flag = false;
        for(int j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){
                flag = true;
            }
        }
        if(flag==false){
            printf("%d", arr[i]);
            break;
        }
    }
    return 0;
}