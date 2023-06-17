#include<bits/stdc++.h>
using namespace std;
vector<int> permutation ;
int is_visited[4];
int n_perm=3,perm_cnt=0;

void print(vector<int> const &input)
{
    copy(input.begin(),
         input.end(),
         ostream_iterator<int>(cout, " "));
         cout<<endl<<endl;
}
int gcd(int a, int b )
{
    if (b==0)
        return a;
    return gcd(b,a%b);

}

/*

void getperm(int i=0)// l i heya l number of elements
{
    if(i==n_perm)
    {
        perm_cnt++;
        //print(permutation);
        //cout<<endl<<perm_cnt<<endl;
        return;
    }
    for(int j=1; j<n_perm+1; j++)//lboucle hethi bch temchi marra wa7da fi owel appel
    {

        if (is_visited[j])
            continue;
        cout<<"i="<<i<<endl;
        permutation.push_back(j);
        is_visited[j]=1;
        print(permutation);
        getperm(i+1);//w kol marra na3mlou appel l hethi bch tarja3 tboucli
        is_visited[j]=0;
        permutation.pop_back();
    }


}
int main()
{
    getperm(0);

}*/

long long perm(int n , vector<int> s){//n=8,s={2,3}
    vector<int> num,denum;
    int p=1,d=1;

    for (int i=1;i<n+1;i++)
        num.push_back(i);
    int i=0,j,g;
    for(j=0;j<(int)s.size();j++)
        for(i=1;i<=s[j];i++)
        denum.push_back(i);

for(i=0;i<(int)(denum.size());i++){
    j=denum[i]-1;
    g=gcd(num[j],denum[i]);
    num[j]/=g;
    denum[i]/=g;

}
for(i=0;i<(int)num.size();i++)
    p*=num[i];

for(i=0;i<(int)denum.size();i++)
    d*=denum[i];

    print(num);
    print(denum);
    return(p/d);

}


int main(){
    vector<int> v={2,3};
cout<<perm(8,v);
}
