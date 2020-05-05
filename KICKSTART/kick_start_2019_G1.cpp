#include<iostream>
#include<limits>
//not complite
using namespace std;

int main(){
    int test,a,m,k,c[100],p[100],d1[100];
    cin>>test;
    int j=1;
    while(j<=test){
        p[j]=0;
        cin>>a>>m;
        k=1;
        for(int i=0;i<a;i++){
            cin>>c[i];
        }
        while(k){
            if(p[j]>m){break;}
            p[j]=0;
            for(int i=0;i<a;i++){
                p[j]+=(c[i] ^ (k-1));
            }
            if((k-1)==0){p[j]>m;d1[j]=-1;break;}
            d1[j]=k-1;
            k++;
        }
       j++;
    }
    for(int i=1;i<=test;i++){
        cout<<"Case #"<<i<<": "<<d1[i]<<"\n";
    }
    return 0;
}