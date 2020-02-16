#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
    int testCase,pageCount,hold,k,l,c;
    cin>>testCase;
    vector<int> cite,hIndex;
    map<int,vector<int>> ans;
    c=1;
    while(testCase!=0){
        
        cin>>pageCount;
        for(int i=0;i<pageCount;i++){
            cin>>hold;
            cite.push_back(hold);
        }
        //real code start
        for(int i=pageCount-1;i>=0;i--){
            int p=1; 
            k=i+1;
            while(p==1){
                l=0;
                for(int j=i;j>=0;j--){
                    if(cite[j]>=k){
                        l++;
                    }
                }
                if(l>=k){
                    hIndex.push_back(k);
                    p=0;
                }
                else{
                    k--;
                }
            }
        }
        ans.insert(pair<int,vector<int>>(c,hIndex));
        hIndex.clear();
        cite.clear();
        c++;
        testCase--;
    }
    map<int,vector<int>>::iterator p = ans.begin();
    while(p != ans.end()){
        cout<<"\nCase #"<<p->first<<":";
        for(auto i=p->second.end()-1;i>=p->second.begin();i--){
            cout<<" "<<*i;
        }
        p++;
    }
 
}