#include <bits/stdc++.h>

using namespace std;

bool estCarreParfait(int nombre) {
    int racine = sqrt(nombre);

    if (racine * racine == nombre) {
        return true;
    } else {
        return false;
    }
}

int div_number(int n){
    int total=1;
for(int i=2;i*i<=n;i++){
    if(n%i==0)
        total++;
}
if(estCarreParfait(n))
    return total*2-1;
else return total*2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   int t ;
   cin>>t;
   while(t--){
    int n ,res,el;
    cin>>n;
    cin>>el;
    res=el;
    for(int i=1;i<n;i++){
        cin>>el;
        res=__gcd(el,res);
    }
if (res==1)
    cout<<1<<endl;
else
    cout<<div_number(res)<<endl;
   }
    return 0;
}
