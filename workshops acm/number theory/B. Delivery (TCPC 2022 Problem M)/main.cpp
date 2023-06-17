#include <bits/stdc++.h>

using namespace std;
typedef long long ll;



int main()
{
       int t ;
       cin>>t;
       while(t--){
        ll n,p=1,imp;
        cin>>n;
        imp=2*n;
        while(!(imp%2))
        {
            p*=2;
            imp/=2;
        }
        if(imp==1){
            cout<<-1<<endl;
            continue;
        }
        else{
            cout<<(max(p,imp)-min(p,imp)+1)/2<<" "<<(imp+p-1)/2<<endl;
        }

        }


    return 0;
}
