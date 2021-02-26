#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Soution( vector< pair< int, vector<string> > > V, int n_pizza, int T2, int T3, int T4){
    ll total=(T2*2)+(T3*3)+(T4*4);
    int n_p=0;
    if(n_pizza>T2*2)
    {
        n_p+=T2;
        n_pizza-=T2*2;
        if(n_pizza>T3*3)
        {
            n_p+=T3;
            n_pizza-=T3*3;
            if(n_pizza>T4*4)
            {
                n_p+=T4;
                n_pizza-=T4*4;
            } 
            else
            {
               n_p+=T4;
               while(n_pizza<T4*4)
               {
                   T4-=1;
                   n_p-=1;
                }
            }
        }
        else
        {
            T4=0;
            n_p+=T3;
            while(n_pizza<T3*3)
            {
                T3-=1;
                n_p-=1;
            }
        } 
    }
    else
    {
        T3=0;
        T4=0;
        n_p+=T2;
        while(n_pizza<T2*2){
            T2-=1;
            n_p-=1;
        }
    }

    cout<<n_p<<endl;
    int g=0;
    while(T2>0){
        cout<<2<<" "<<g<<" "<<g+1<<endl;
        g+=2;
        T2-=1;
    }
    while(T3>0){
        cout<<3<<" "<<g<<" "<<g+1<<" "<<g+2<<endl;
        g+=3;
        T3-=1;
        }
        while(T4>0){
            cout<<4<<" "<<g<<" "<<g+1<<" "<<g+2<<" "<<g+3<<endl;
            g+=4;
            T4-=1;
        }
}
int main(){
    int n_pizza,T2,T3,T4;
    cin>>n_pizza>>T2>>T3>>T4;
    vector< pair< int,vector<string> > > V;
    for(int i=0;i<n_pizza;i++){
        int k;
        cin>>k;
        vector<string> v;
        for(int j=0;j<k;j++){
            string s;
            cin>>s;
            v.push_back(s);
        }
        pair< int,vector<string> > p;
        p.first=k;
        p.second=v;
        V.push_back(p);
    }
    Soution(V,n_pizza,T2,T3,T4);
    // vector< pair< int , vector<string> > >::iterator itr;
    
    // for(itr=V.begin();itr!=V.end();itr++){
    //   //  cout<<itr->first<<" "<<itr->second[0]<<endl;
    // }
}
