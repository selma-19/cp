#include <bits/stdc++.h>
using namespace std;

int main(){

vector<int> wasted ;
vector<string> fruits={"Carrots","Kiwis","Grapes"};

int n , m , w , q ,x,y,pos,a;
cin>>n>>m>>w>>q;



for(int i=0;i<w;i++){

 cin>>x>>y;
 wasted.push_back((x-1)*m+(y-1));
}
sort(wasted.begin(),wasted.end());

for(int i=0;i<q;i++){

    cin>>x>>y;

    pos=(x-1)*m+y-1;
    if (find(wasted.begin(), wasted.end(), pos) != wasted.end()) {
       cout << "Waste"<<endl;


    }
    else{
    int j=0;
    while((pos>wasted[j])&&(j<w)){
        j++;
    }
    pos=pos-j;
    cout<<fruits[pos%3]<<endl;
 }}


       return 0;
}
