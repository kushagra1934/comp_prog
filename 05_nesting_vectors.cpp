//vector of vectors
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    cout<<"size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        //v.size() -> O(1)
        cout<< v[i]<<" " ;
    
    }
    cout<<endl;
}
int main() {
    int N;
    cin>>N;
    vector<vector<int>> v;
    for(int i =0; i<N;i++){
        int n;
        cin>>n;
        vector<int> temp;
        for ( int j=0;j<n;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for ( int i =0;i<v.size();i++){
        printVec(v[i]);
    }
    
    
}

// //size: 3
// //1 2 3 
// size: 3
// 3 4 5 
// size: 2
// 1 2 
//as arrays are of fixed size, we then use vector of vectors