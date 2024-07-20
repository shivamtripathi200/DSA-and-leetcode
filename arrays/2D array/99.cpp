#include <bits/stdc++.h>
using namespace std; 
int main(){
    int arr[3][3];
    for(int row = 0;row <3;row ++){
        for (int col = 0; col < 3; col++)
        {
            cin>>arr[row][col];
        }
        
    }
    for(int row = 0;row <3;row ++){
        for (int col = 0; col < 3; col++)
        {
            cout<<arr[row][col]<<" ";
        }cout<<endl;
        
    }cout<<endl;
    int row = 0 ;
    int col = 0;
    while(col<3){
        while(row <3 || row >=0){
            cout<<arr[row][col];
            if(col & 1){
                row--;
            }else{
                row++;
            }
        }
        col++;
        if( row ==3 ){
            row--;
        }
        if( row == -1){
            row++;
        }
    }

}