#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long m, n,el,vasya=0 , petya=0 ;
    vector<long long> queries, permutation,indexes ;
    cin >> n ;
     for(int i=0; i<n; i++){
        indexes.push_back(0);
    }
    for(int i=0; i<n; i++){
        cin >> el ;
        permutation.push_back(el);
        indexes[el-1]=i+1;
        //cout<<indexes[i]<<"|";
    }
    cin >> m ;
    for(int i=0; i<m; i++){
        cin >> el ;
        queries.push_back(el);
    }
    for(int i=0;i<m;i++){
            vasya+=(indexes[queries[i]-1]);
            petya+=(n-indexes[queries[i]-1]+1);
            //cout<<vasya<<" "<<petya<<endl;

    }
    /*for(int i=0;i<n;i++)
        cout <<indexes[i]<<"|";
    cout<<endl;*/
    cout<<vasya<<" "<<petya;

    }
//2 9 3 1 6 4 7 8 5 //4 1 3 6 9 5 7 8 2
