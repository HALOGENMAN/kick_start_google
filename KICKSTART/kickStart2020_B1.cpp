#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int test,k;
    cin>>test;
    k=1;
    int n;
    int check,l;
    map<int,int> solution;
    while(test>0){
        check=0;
        cin>>n;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        for(int i=1;i<n-1;i++){
            if(ans[i]>ans[i-1] && ans[i]>ans[i+1]){
                check++;
            }
        }
        solution.insert({k,check});
        k++;
        test--;
    }
    //output
    for(auto itr = solution.begin();itr!=solution.end();itr++){
        cout<<"Case #"<<itr->first<<":"<<" "<<itr->second<<endl;
    }
}