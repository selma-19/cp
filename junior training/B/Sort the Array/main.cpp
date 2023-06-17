#include <bits/stdc++.h>
using namespace std;

int main(){

   int n , el ,pos=0,i=0;
   vector<int> v,u;
   cin >> n ;
   for ( i=0;i<n;i++)
   {
       cin>>el;
       v.push_back(el);
       u.push_back(el);
   }
   if (is_sorted(v.begin(), v.end()))
       {
           cout<<"yes"<<endl;
           cout<<1<<" "<<1;
           return(0);
       }
   sort(u.begin(),u.end());

    for (i=0;i<n;i++)
   {
       if(u[i]!=v[i]){
            pos=distance(v.begin(), find(v.begin(), v.end(), u[i]));
       reverse(v.begin()+i,v.begin()+pos+1);
       break;
       }
       }
       if (is_sorted(v.begin(), v.end()))
       {
           cout<<"yes"<<endl;
           cout<<i+1<<" "<<pos+1;
       }
       else cout<<"no";






       return 0;
}
