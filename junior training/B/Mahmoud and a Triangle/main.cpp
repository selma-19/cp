#include <bits/stdc++.h>
using namespace std;

bool test(vector<int> v ){
if((int)v.size()<3)
    return false;
else
{
    if((v[1]+v[2]>v[0])&&(v[1]+v[0]>v[2])&&(v[0]+v[2]>v[1]))
        return true ;
    else {

            v.erase(v.begin());

            return test(v);
    }
}
}

int main(){

vector<int> v;
int n,el ;
cin>>n;
for(int i=0;i<n;i++){
   cin>>el;
   v.push_back(el);
}
sort(v.begin(),v.end(),[](int a,int b ){return a>b;});
/*for(int i=0;i<n;i++){
cout<<v[i]<<"|";
}
cout<<endl;*/
if(test(v))
cout<<"YES";
else
    cout<<"NO";

       return 0;
}
