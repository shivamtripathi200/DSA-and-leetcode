#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int,string> m;
    m[1]="babbar";
    m[2]="kumar";
    m[13]="love";
    for(auto i:m){
        cout<<i.first<<endl;
    }
    m.insert({5,"bheem"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding 13-> "<<m.count(13)<<endl;
    m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    m.insert({13,"love"});
    auto it = m.find(5);
    
    for(auto i= it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}