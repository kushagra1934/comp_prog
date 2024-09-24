//array of vectors
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
    vector<int> v[N];
    for(int i =0; i<N;i++){
        int n;
        cin>>n;
        for ( int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for ( int i =0;i<N;i++){
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
//in array of vectors the numbers of rows is fixed whereas number of columns is variable