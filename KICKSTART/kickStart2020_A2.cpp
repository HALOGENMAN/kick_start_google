#include <iostream>
#include<vector>
#include<map>

using namespace std;


int main(){
    vector<vector<int>> data;
    vector<int> test;
    map<int,int>ans;
    int a,b,c,nod,test1,c1,k,max,pos1,pos2,sum=0;
    c1=1;
    nod=0;
    cin>>test1;
    while(c1<=test1){
        cin>>a>>b>>c;
        for(int i=0;i<a;i++){
            test.clear();
            for(int j=0;j<b;j++){
                cin>>k;
                test.push_back(k);
            }
            data.push_back(test);
        }
        for(int i=0;i<b;i++){
            
        }
        data.clear();
        c1++;
    }
    // cout<<endl;
    // for(auto itr=ans.begin();itr != ans.end();itr++){
    //     cout<<"Case #"<<itr->first<<":"<<" "<<itr->second<<endl;
    // }
    // return 0;
}