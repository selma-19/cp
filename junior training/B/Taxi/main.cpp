#include <iostream>

using namespace std;

int main()
{   string turn="petr";
    int a , b , c , d;
    cin>>a>>b>>c>>d;
    while(a<=c){


        if (turn=="petr")
           {a+=b;
            turn="taxi";}
        else{
            c-=d;
            turn="petr";
            }

    }
    if (turn=="petr")
        cout<<a ;
    else cout<<c;

}
