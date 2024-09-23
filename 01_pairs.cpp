#include <bits/stdc++.h>
using namespace std;
int main() {
    pair<int,string> p;
    // p=make_pair(2,"abc");
    p={2,"abcd"};
    //we can also make a copy and also pass the reference 
    // pair<int, string> p1=p; //copy
    pair<int,string> &p1=p; //passing the reference 
    //so values gets changed in the original pair also 
    p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;
    //pairs are used to maintain relationship between 2 things 
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]);
    for ( int i = 0; i < 3; i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    
    //relation is maintained automatically by using pair<int,int>
    

}
