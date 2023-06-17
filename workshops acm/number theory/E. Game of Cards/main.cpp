#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi ;
#define pb push_back
#define all(v) (v).begin(),(v).end()

int primes[1000000];
int l;
int k;
bool is_prime(int n){
    if(n<2)
        return false;
 for(int j=2;j*j<=n;j++)
 {
     if (n%j==0)
        return false;
 }
 return true;
}
void get_primes(int l){
    k=0;
for(int i=2;i<=l;i++){
            if (is_prime(i))
            {
                primes[k]=i;
                k++;
            }

}
}

int tries(vi v,int l){
    int m=10000000,res=0,i=0;
while(i<k){
        res=0;
    for(int j=0;j<(int)v.size();j++){
        while(v[j]%primes[i]==0)
        {v[j]/=primes[i];
        res++;}
        }
        if(res==0)
            return 0;
        if(res<m)
            m=res;

    i++;
}
return(m);
    }
int main()
{
    int n,el;
    vi rami,yessine;
    cin>>n;
    cin>>l;
    get_primes(l);
    for(int i=0;i<n;i++){
        cin>>el;
        rami.pb(el);
    }
    for(int i=0;i<n;i++){
        cin>>el;
        yessine.pb(el);
    }

    int r=tries(rami,l),y=tries(yessine,l);
    if (r>=y){
        cout<<"Rami";
    }
    else cout<<"Yessine";

    return 0;
}
