#include <bits/stdc++.h>
using namespace std;
void sortin(int arr[],int n){
    bool sorted=true;
for(int i = 1;i<n;i++){
    for(int j= 0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            sorted=false;
        }
    }
    if(sorted==true)
    break;
}
}
int appleAndCoupon(int n, int m, int arr[]){
    // Write your code here.
    sortin(arr,n);
    int sum = 0;
    for(int i = 0 ; i<n;i++){
        sum=sum+arr[i];
    }
    sum= sum-arr[n-m];
    return sum; 
}
int main(){
int arr[5]={5,2,4,1,3};
cout<<appleAndCoupon(5,3,arr)<<endl;
return 0;
}