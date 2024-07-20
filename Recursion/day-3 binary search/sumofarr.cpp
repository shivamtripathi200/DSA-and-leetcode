//sum of array using recursion
#include<bits/stdc++.h>
using namespace std;

int sumofarr(int arr[],int size){
    static int sum=0;
    if (size == 0)
    return sum ;
    else
    sum+=arr[0];
    return sumofarr(arr +1,size-1);
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int ans = sumofarr(arr,7);
    cout<<ans<<endl;
}