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
                location.push_back(i); //agar sum max se chota hh to push krr dega ,push inthe sence push at top
            }
            
        }
        location2.insert(pair<int,vector<int>>(sum,location)); // total sum push krne k bad uske sath elements ka vector bhe push krdega
    }
    map<int,vector<int>>::iterator p = location2.end(); //vector inside map
    vector<int>::iterator k; 
    p--;
    cout<<p->second.size()<<endl; // gives tho elements length
    //cout<<p->first<<endl; //this one is for printing sum
    for(int i= p->second.size()-1;i>=0;i--){
        cout<< p->second[i]<<" ";
    }

}