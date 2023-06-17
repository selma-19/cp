#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    string roy="ROY",g="G",biv="BIV";
    cin >>n;
    if (n%4==0)
       {cout<<roy<<g<<biv;
       n-=7;
       while(n!=0)
           {

                cout<<g;
                n--;

           if(n!=0)
           {
               cout<<roy;
               n-=3;
           }
       }}
       else if(n%4==1){
        cout<<roy<<g<<biv;
        n-=7;
        while(n!=0)
           {

                cout<<g;
                n--;

           if((n!=0)&&(n!=5))
           {
               cout<<roy;
               n-=3;
           }
           else if (n==5)
           {
               cout<<biv<<"Y";
               n-=4;
           }


       }

}
else if(n%4==2){
        cout<<roy<<g<<biv;
        n-=7;
        while(n!=0)
           {

                cout<<g;
                n--;

                 if(n==2){
                    cout<<"BI";
                    n-=2;
                }
                else if (n==3){
                    cout<<"BIV";
                    n-=3;
                }

        else if((n!=0)&&(n!=5)&&(n!=10)&&(n!=3))
           {
               cout<<roy;
               n-=3;
           }
           else if ((n==10)||(n==5))
           {
               cout<<biv<<"Y";
               n-=5;
           }


       }

}
else if(n%4==3){
        cout<<roy<<g<<biv;
        n-=7;
        while(n!=0)
           {

                cout<<g;
                n--;

           if((n!=0)&&(n!=5)&&(n!=10)&&(n!=15))
           {
               cout<<roy;
               n-=3;
           }
           else if ((n==10)||(n==5)||(n==15))
           {
               cout<<biv<<"Y";
               n-=5;
           }


       }

}

}
