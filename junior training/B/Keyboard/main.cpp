#include <iostream>
#include <unordered_map>
#include <vector>
#include <cmath>
using namespace std;



int main(){
unordered_map<char,vector<pair<int,int>>> keyboard;
int n , m ,x, l,total=0 , add=0 ;
double dist;
string text;
pair<int,int> p;
vector<pair<int,int>> shift;

cin>>n>>m>>x;
for(int i=1;i<=n;i++){
    cin >> text ;
    for(int j=1;j<=m;j++)
    {
       if (text[j-1]=='S')
        shift.push_back(make_pair(i,j));
       else
        keyboard[text[j-1]].push_back(make_pair(i,j));
    }
}
cin>>l;
cin>>text;

for(int i=0;i<l;i++){
            char c = tolower(text[i]);

        if (keyboard[c].empty()) {
            cout << -1;
            return 0;
        }
    if(islower(text[i]))
        continue;

    else if(isupper(text[i])){
            if (shift.empty()) {
                cout << -1;
                return 0;
            }

            for(int k=0;k<keyboard[c].size();k++)
            {
            p=keyboard[c][k];
           for(int j=0;j<shift.size();j++){
            dist=sqrt(pow(p.first - shift[j].first,2) +pow(p.second - shift[j].second,2));
            if(dist<=x){
                add=0;
                break;
            }
            if((dist>x)&&(j==(int)shift.size()-1)){
                    add=1;
           }}
           if(add==0)
            break;
           }
           total+=add;



    }
}

cout<<total;
return 0;
}
