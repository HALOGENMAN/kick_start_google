#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> a;

    int test,val,size,c=0;
    cin>>test;
    while(test>0){
        cin>>size;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                cin>>val;
                a[i].push_back(val);
            }
        }
        c++;
        test--;
    }
    for(int i=0;i<size;i++){
            cout<<endl;
            for(int j=0;j<size;j++){
                cout<<a[i][j]<<" ";
            }
            
    }
}