#include <iostream>

using namespace std;


int main(){
    int a,b,c,test,a1[50],a2[50],c1,p,k;
    c1=1;
    cin>>test;
    while(c1<=test){
        p=0;
        cin>>a>>b>>c;
        for(int i=0;i<b;i++){
            cin>>a1[i];
        }
        for(int i=0;i<c;i++){
            cin>>a2[i];
        }
        for(int i=0;i<c;i++){
            int j,cc,kk;
            cc=1;
            kk=j=a2[i];
            while(kk<=a){
                k=0;
                for(int p=0;p<b;p++){
                    if(kk==a1[p]){k=1;}
                }
                if(k==0){p++;}
                
                cc++;
                
                kk=j*cc;
            }
        }
        cout<<"Case#"<<c<<":"<<p<<"\n";
        c1++;
    }
    
    return 0;

}