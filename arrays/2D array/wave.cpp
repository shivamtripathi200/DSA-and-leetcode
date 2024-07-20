// codestudio: print like a wave
#include<bits/stdc++.h>
using namespace std;

void print( int arr[3][3]){
    for (int  row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout<<arr[row][col];
        }cout<<endl;
        
    }cout<<endl;
    
}

void wave( int arr[3][3]){
    for (int  col = 0; col < 3; col++)
    {
        if(col &1){
            for (int row = 2; row >= 0; row--)
            {
                cout<<arr[row][col];
            }cout<<endl;
            
        }else{
            for (int row = 0; row < 3 ; row++)
            {
                cout<<arr[row][col];
            }cout<<endl;
            
        }
    }
}
int main(){
    int arr[3][3];
    for(int row = 0 ; row <3; row++){
        for (int col = 0 ;col < 3 ; col++){
            cin>>arr[row][col];
        }
    }
    cout<<"given input:"<<endl;
    print(arr);
    cout<<"Printing like a wave:"<<endl;
    wave(arr);

}