#include <iostream>
#include<vector>
#include<map>
#include <bits/stdc++.h> 
using namespace std;


int main(){

    vector<vector<int>> data; 
    vector<int>data1;
    map<int,int> ans; 
    int a,b,c1,c,test,sum,count;
    
    c1=1;
    cin>>test;
    while(c1<=test){
        sum=0;
        count=0;
        cin>>a>>b;
        for(int i=0;i<a;i++){
            cin>>c;
            data1.push_back(c);
        }
        sort(data1.begin(),data1.end());
        for(int k : data1){
            sum+=k; 
            if(sum<=b){
                count++;
            }
        }
        ans.insert({c1,count});
        data1.clear();
        c1++;
    }
    cout<<endl;
    for(auto itr=ans.begin();itr != ans.end();itr++){
        cout<<"Case #"<<itr->first<<":"<<" "<<itr->second<<endl;
    }
    return 0;
}