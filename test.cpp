#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
    int test;
    cin>>test;
    map<int,int> ans;
    vector<int> data;
    int j=1;
    while(j<=test){
        j++;
    }
    for(auto itr=ans.begin();itr != ans.end();itr++){
        cout<<"Case #"<<itr->first<<":"<<" "<<itr->second<<endl;
    }
}

&& c[0].first < data[i].second < c[0].second && (data[i].first < c[0].first && data[i].second > c[0].second) && (data[i].first > j[0].first && data[i].second < j[0].second)