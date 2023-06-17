#include <bits/stdc++.h>

using namespace std;

long long power(long long B,long long P,long long M){
/*if (P==0) return 1 ;
int res ;
res=power(B,P/2,M);
res=res*res %M;
if (P&1)
    res=(res*B)%M ;
return res ;*/
int res=1;
while(P){
        if(P&1)
          res=res*B%M ;

    B=B*B%M;
    P=P>>1;

    }
    return res;

}
int main(){

    long long B, P, M,p,b;
    while (cin >> B >> P >> M) {

                cout <<power(B%M,P,M) <<endl;

        string blank_line;
        getline(cin, blank_line); // consume the blank line
    }
    return 0;
}
