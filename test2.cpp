#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<bits/stdc++.h>
using namespace std;

void count(vector<long> aa){
    aa[1] = 20;
}

int main(){
    multimap<int,int> aa;
    multimap<int,int>::iterator itr;
    aa.insert(pair<int,int>(10,20));
    aa.insert(pair<int,int>(10,30));
    for(itr = aa.begin();itr!=aa.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
}