#include <bits/stdc++.h>
using namespace std;
int main(){

   int n , m ;
   char c;
   string s;
   set<char> color;
   vector<string> v;
   cin >> n >> m >> c ;
   for (int i=0;i<n;i++)
   {
       cin>>s;
       v.push_back(s);
   }
   for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){


        if(v[i][j]==c){

            if(i!=0)
            {
                if(v[i-1][j]!='.')
                    color.insert(v[i-1][j]);
            }
            if(i!=n-1){
                if(v[i+1][j]!='.')
                    color.insert(v[i+1][j]);
            }
             if(j!=0)
            {
                if(v[i][j-1]!='.')
                    color.insert(v[i][j-1]);
            }
            if(j!=m-1){
                if(v[i][j+1]!='.')
                    color.insert(v[i][j+1]);
            }
        }

   }}
    color.erase(c);
   cout<<color.size();
       return 0;
}
