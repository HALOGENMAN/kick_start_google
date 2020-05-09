#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<algorithm> 
using namespace std;

int main(){
    int test,k;
    cin>>test;
    vector<char> dd;
    vector<char> dk;
    while(test>0){
        string value;
        cin>>value;
        
        for(int i=0;i<value.size();i++){
            if(value[i] != ')'){
                dd.push_back(value[i]);
            }
            else
            {   int l=i-1;
                dk.clear();
                while(value[l] != '('){
                    char h = value[l];
                    dk.push_back(h);
                    dd.pop_back();
                    l--;
                }
                dd.pop_back();
                reverse(dk.begin(),dk.end());
                char aa = dd.back();
                int count =  int(aa)-48;
                dd.pop_back();
                for(int ii=0;ii<count;ii++){
                    for(char ss : dk){
                        dd.push_back(ss);
                    }
                }
            }
        }
        for(char aa : dd){
            cout<<aa;
        }
        dd.clear();
        k++;
        test--;
    }
}