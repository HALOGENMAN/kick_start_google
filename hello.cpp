#include<iostream>
#include<limits.h>
using namespace std;

int prime(int x){
    int t=0;
    for(int i=2;i<x;i++){
        if(x%i==0){
            return 0;
            break;
        }  
    }
    return 1;
    
}

int main(){
    
    int x,t;
    cin>>x;
    t = prime(x);
    if(t==1){cout<<"prime number:"<<x;}
    else{cout<<"not a prome number:"<<x;}
    return 0;
}