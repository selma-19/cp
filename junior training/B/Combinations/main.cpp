#include <bits/stdc++.h>

using namespace std;
long long v[101][101]={0};
/*int gcd(int a, int b )
{
    if (b==0)
        return a;
    return gcd(b,a%b);

}*/
//long long combination(int n, int m)


   /* vector<int> num, denum ;
    for (int i=1; i<n+1; i++)
        num.push_back(i);
    int i=0,j,g;
    long long p=1,d=1;
    for(j=1; j<=(n-m); j++)
        denum.push_back(j);

    for(j=1; j<=m; j++)
        denum.push_back(j);
    for(i=0; i<(int)(denum.size()); i++)
    {
        j=denum[i]-1;
        g=gcd(num[j],denum[i]);
        num[j]/=g;
        denum[i]/=g;

    }
    for(i=0; i<(int)num.size(); i++)
        p*=num[i];

    for(i=0; i<(int)denum.size(); i++)
        d*=denum[i];

    return(p/d);*/








int main()
{
    int n, m,nm;
    v[1][1]=1;
    v[0][0]=0;
    v[1][0]=1;
     for(int i=2;i<=100;i++)
        for(int j=0;j<=i;j++)
        v[i][j]= (j==1)? i : ((((j==0)&&(i!=0))||(j==i))?1:( v[i-1][j-1]+v[i-1][j]));
    cin>>n>>m;
    while((n!=0)&&(m!=0))
    {
        cout <<n <<" things taken "<<m<<" at a time is "<<v[n][m]<<" exactly."<<endl;
        cin>>n>>m;

    }
}
