#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
    vector<vector<int>> a;
    int size,aa;
    cin>>size;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            a[i].push_back(j);
        }
    }

}