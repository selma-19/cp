

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v ;
    int n ;

    for (int i=0;i<3;i++){
        cin >>n;
        v.push_back(n);
    }
   sort (v.begin(), v.end());
   cout<< v[2]-v[0];}
