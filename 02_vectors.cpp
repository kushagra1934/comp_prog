#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    cout<<"size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        //v.size() -> O(1)
        cout<<v[i]<<" ";
    }
    v.push_back(2);
    cout<<endl;
    
}
int main() {
    vector<int> v;
    //vector<int> v(10,3); //11 size ka vector
    //vector<int> v(5); //this size is not fixed, it can be expanded or contracted
    v.push_back(7); //now this will give a vector of size 6 with 7 as the last element
    // O(1)
    v.push_back(6);
    
    //v.pop_back();//removes from the last
    //both are of O(1)
    // printVec(v);
    vector<int> v2=v; //O(n)
    v2.push_back(5);
    printVec(v);
    printVec(v);
    printVec(v2);
    
}

//we can also make a vector of strings, other containers in vectors