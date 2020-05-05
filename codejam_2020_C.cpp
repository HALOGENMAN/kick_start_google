#include<iostream>
#include<vector>
#include<map>
#include<utility>

struct time1{
    int first;
    int second;
};

using namespace std;



int main(){
    int test,a,b,num;
    cin>>test;
    time1 t;
    vector<time1> c;
    vector<time1> j;
    map<int,vector<char>> ans;
    vector<char> test2;
    pair<int,int> temp;
    vector<pair<int,int>> data;
    int k=1;
    while(k<=1){
        cin>>num;
        vector<char> test2(num);
        for(int i=0;i<num;i++){
            cin>>a>>b;
            temp.first = a;
            temp.second = b;
            data.push_back(temp);
        }
        t.first=data[0].first;
        t.second = data[0].second;
        test2[0] = 'C';
        c.push_back(t);
        int kk=0;
        for(int i=1;i<data.size();i++){
            if(c[0].first < data[i].first < c[0].second || c[0].first < data[i].second < c[0].second || data[i].first < c[0].first && data[i].second > c[0].second || data[i].first > j[0].first && data[i].second < j[0].second ){
                t.first = data[i].first;
                t.second = data[i].second;
                test2[i] = 'J';
                j.push_back(t);
                kk = i;
                break;
            }
        }
        int count;
        int unionCheck;
        cout<<data.size()
        for(int i= 1; i<data.size() && i != kk ;i++){
            cout<<"\n"<<i<<endl;
            // count=1;
            // for(int l= 0;l< c.size(); l++){
            //     if(c[0].first < data[i].first < c[0].second || c[0].first < data[i].second < c[0].second || data[i].first < c[0].first && data[i].second > c[0].second || data[i].first > j[0].first && data[i].second < j[0].second ){
            //         count = 0;
            //         break; 
            //     }
            // }
            // if(count == 1){
            //     t.first = data[i].first;
            //     t.second = data[i].second;
            //     test2[i] = 'C';
            //     c.push_back(t);
            //     continue;
            // }
            // count=1;
            // for(int l= 0;l< c.size(); l++){
            //     if(j[0].first < data[i].first < j[0].second || j[0].first < data[i].second < j[0].second || data[i].first < j[0].first && data[i].second > j[0].second || data[i].first > j[0].first && data[i].second < j[0].second ){
            //         count = 0;
            //         break; 
            //     }
            // }
            // if(count == 1){
            //     t.first = data[i].first;
            //     t.second = data[i].second;
            //     test2[i] = 'J';
            //     j.push_back(t);
            //     continue;
            // }
            //     unionCheck = 9;
        }
        if(unionCheck == 9){
            test2.clear();
            test2.push_back('I');
        }
        
       
        ans.insert({k,test2});
        data.clear();
        k++;
    }
    for(auto itr=ans.begin();itr != ans.end();itr++){
        cout<<"Case #"<<itr->first<<":"<<" ";
        for(char x : itr->second){
            if(x == 'I'){
                cout<<"IMPOSSIBLE";
                break;
            }
            cout<<x;
        }
        cout<<endl;
    }
}