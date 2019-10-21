#include<iostream>
//not solved
using namespace std;

int prime(int x){
    for(int i=2;i<x;i++){
        if(x%i==0){
            return 0;
            break;
        }
    }
    return 1;
}

int main(){
    int a,c=0;
    int d[1000];
    int count=0,b=2;
    cin>>a;
    d[0]=2;
    int j=1;
    for(int i=3;i<=a;i++){
        if(prime(i)==1){d[j]=i;j++;}
    }
    for(int i=0;i<j-1;i++){
        c+=d[i];
        if(prime(c) == 1){count++;}

    }
    cout<<"\n"<<count;
    return 0;
}