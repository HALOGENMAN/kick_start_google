#include <iostream>

using namespace std;


int main(){
    int a,b,c,test,a1[100],a2[100],c1,p[100],k;
    c1=1;
    cin>>test;
    while(c1<=test){
        p[c1]=0;
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
                if(k==0){p[c1]++;}
                
                cc++;
                
                kk=j*cc;
            }
        }
        c1++;
    }
    for(int i=1;i<=test;i++){
        cout<<"Case#"<<i<<":"<<p[i]<<"\n";
    }
    
    return 0;

}