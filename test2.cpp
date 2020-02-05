#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
    long max,pizz;
    vector<long> a;
    vector<int> location;
    map<int,vector<int>> location2;
    
    cin>>max>>pizz;
    int a1;
    long sum=0;
    for(int i=0;i<pizz;i++){
        cin>>a1;
        a.push_back(a1);
    }
    cout<<endl;
    for(int j= a.size()-1;j>=0;j--){
        sum=0;
        location.clear();
        for(int i=j;i >= 0;i--){
            sum+=a[i];
           
            if(max < sum){
               
               sum-=a[i];
            }
            else{
                location.push_back(i);
            }
            
        }
        location2.insert(pair<int,vector<int>>(sum,location));
    }
    map<int,vector<int>>::iterator p = location2.end(); 
    vector<int>::iterator k;
    p--;
    cout<<p->second.size()<<endl;
    for(int i= p->second.size()-1;i>=0;i--){
        cout<< p->second[i]<<" ";
    }

}