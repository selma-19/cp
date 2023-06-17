#include <bits/stdc++.h>

using namespace std;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}

int main()
{
    //n 9adeh ynajem yhezz
    //m 9adeh mn container
vector <pair<int,int>> v ;
int m , n,matches ,j=0, el1,el2;
cin>> n >> m ;
for (int i=0;i<m;i++){
    cin >> el1 >> el2;
    v.push_back(make_pair(el1,el2));
}
sort(v.begin(), v.end(), sortbysec);
/*for (int i=0;i<m;i++){
    cout << v[i].first << ":" << v[i].second << '|';
}*/
while((n>0)&&(j<m)){
        if (n>v[j].first){
    matches+=v[j].second*v[j].first;
    n-=v[j].first;}
    else{
        matches+=v[j].second*n;
        break;
    }

    j+=1;
}
cout<<matches;

}
