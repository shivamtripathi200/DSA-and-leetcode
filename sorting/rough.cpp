#include <bits/stdc++.h>
#include <vector>
using namespace std;
void sortin(vector<int>&arr,int n){
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
void showdata(vector<int>&arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
    
    cout<<endl;
}

int main(){
    vector<int>arr(5,3,2,1,4);
    showdata(arr,5);
    sortin(arr,5);
    showdata(arr,5);
    
}