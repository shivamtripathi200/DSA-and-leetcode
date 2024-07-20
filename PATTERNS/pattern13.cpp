//    1     1 1
//   23     2 12
//  456     3 123
// 78910    4 1234

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(n-1-j>i){
                cout<<" ";
            }
            else{
                cout<<count++;
            }
        }
        cout<<endl;
    }
}
