#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={2,3,5,6,7};
    // for (int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    cout<<endl;
    //vector<int>::iterator it;
    for (auto it=v.begin();it!=v.end();++it){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    for ( auto value:v){ //this iterator works on all containers
        cout<<value<<" ";
    }
    cout<<endl;
}