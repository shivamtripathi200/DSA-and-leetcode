#include<bits/stdc++.h>
using namespace std;
void print (int arr[][4],int a,int b){
    for (int row = 0; row < a; row++)
    {
        for (int col = 0; col < b; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}
 /*function returns true when element is found*/
bool findelement(int arr[][4],int target,int n,int m){
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if(arr[row][col]==target){
                return true;
            }
        }
        
    }
    return false;
    
}  
void row_wise_sum(int arr[][4],int n, int m){
    cout<<"sum of the array:";
    for (int row = 0; row < n; row++)
    {
        int sum=0;
        for (int col = 0; col < m; col++)
        {
            sum+=arr[row][col];
        }
        cout<<sum<<endl;
        
    }
    
}
int largest_sum(int arr[][4],int n, int m){
    int max;
    for (int row = 0; row < n; row++)
    {
        int sum=0;
        for (int col = 0; col < m; col++)
        {
            sum+=arr[row][col];
        }
        if(max<sum)
        max=sum;
        
    }
    return max;
}
void col_wise_sum(int arr[][4],int n,int m){
    cout<<"column wise sum of the array:";
    for (int col = 0; col < n; col++)
    {
        int sum=0;
        for (int row = 0; row < m; row++)
        {
            sum+=arr[row][col];
        }
        cout<<sum<<endl;
        
    }
}

int main() {
    int arr[3][4];
    // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin>>arr[row][col];
        }
        
    }
    print(arr,3,4);
    int target;
    cout<<"enter the number you want to find:";
    cin>>target;
    if(findelement(arr,target,3,4)){
        cout<<"Element found"<<endl;
    }else{
        cout<<"element not present in array."<<endl;
    }
    row_wise_sum(arr,3,4);
    col_wise_sum(arr,3,4);
    cout<<"the largest sum is:"<<largest_sum(arr,3,4);
    
    
}