#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
#define pb push_back
int sieve[10000001];
void set_sieve(){
    memset(sieve,0,sizeof(sieve));
    for(int i=2;i<10000001;i++){
        if(sieve[i]!=0)
            continue;
        for(int j=i;j<10000001;j+=i){
                if(sieve[j]==0)
            sieve[j]=i;
            }
    }
}
int find_total(int v1,int v2)
{
    int res=0;
  while(v1!=v2){
       if(v1>v2)
        v1/=sieve[v1];
        else v2/=sieve[v2];
        res++;
    }

    return res;
}
int main()
{
    set_sieve();
    int t ;
    cin>>t;
    while(t--){
        int n,el,total=0 ;
        cin>>n;
        vi v1,v2;
        for(int i=0;i<n;i++){
            cin>>el;
                v1.pb(el);
        }
         for(int i=0;i<n;i++){
            cin>>el;
                v2.pb(el);
        }
        for(int i=0;i<n;i++){
            if(v1[i]==v2[i])
                continue;
            total+=find_total(v1[i],v2[i]);
        }
        cout<<total<<endl;
    }
    return 0;
}
