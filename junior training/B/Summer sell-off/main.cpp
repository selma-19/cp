#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){

   vector<vector<int>> v ;
   int n,f,c,p;
   long long total=0;
   cin>>n>>f;
   for(int i=0;i<n;i++){
        v.push_back({0,0,0});
    cin>>p>>c;
    v[i][0]=p;
    v[i][1]=c;
    v[i][2]=min(c,p*2)-min(c,p);

   }
   if (f==0){
        for(int i=0;i<n;i++){
        total+=min(v[i][0],v[i][1]);
   }
   cout<<total;
   return 0;
   }

    sort(v.begin(),v.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[2]>b[2];
    });

   for(int i=0;i<n;i++){
        if(i<f)
        total+=min(v[i][0]*2,v[i][1]);
   else
    total+=min(v[i][0],v[i][1]);
   }
   cout<<total;








       return 0;
}


