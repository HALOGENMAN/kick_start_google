#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int test,k;
    cin>>test;
    k=1;
    map<int,int> solution;
    int a,b;
    while(test>0){
        cin>>a>>b;
        vector<int> as(a);
        for(int i=0;i<a;i++){
            cin>>as[i];
        }
        int check=0;
        for(int i=a-1;i>=0;i--){
            check = b%as[i];
            b=b-check;
        }
        solution.insert({k,b});
        k++;
        test--;
    }
    //output
    for(auto itr = solution.begin();itr!=solution.end();itr++){
        cout<<"Case #"<<itr->first<<":"<<" "<<itr->second<<endl;
    }
}