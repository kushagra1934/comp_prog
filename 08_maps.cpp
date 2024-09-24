//Maps, Unordered Maps, Multimaps(basic intro)

/*In maps the value is stored in sorted
order but in unordered map the values are 
not stored according to the value of the key*/
#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for (auto &pr:m){
        cout<<(pr.first)<<" "<<(pr.second)<<endl;
    }
}
int main(){
    map<int, string> m;
    m[1]="abc";  //O(log n)
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
    print(m);

    /*if the key is defined as m[6] and 
    no value is given then the value associated
    with it will be empty string in case of string 
    and 0 in case of integrer*/
    
    //also, in a map the keys are unique
}