#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include <bits/stdc++.h>
#include<string>
using namespace std;

vector<int> convertStrtoArr(string str) 
{ 
    int str_length = str.length();   
    vector<int> ans(str_length);
    ans.clear();
    for ( int i = 0; str[i] != '\0'; i++) { 
            ans.push_back((str[i] - 48)); 
    } 
    return ans;
}

int main(){
    int test;
    string num;
    cin>>test;
    vector<int> data;
    vector<char> test1;
    map<int,vector<char>> ans;
    int j=1;
    while(j<=test){
        cin>>num;
        data = convertStrtoArr(num);
        
        for(int i=0 ;i<data.size();i++){
            int number = data[i];
            if(number == 0){
                if(i != 0){
                    for(int j=0;j<data[i-1];j++){
                        test1.push_back(')');
                    }
                    test1.push_back((data[i]+48));
                }
                else{
                    test1.push_back((data[i]+48));
                }
            }
            else{
                if(i == 0){
                    for(int j=0;j<data[i];j++){
                        test1.push_back('(');
                    }
                    test1.push_back((data[i]+48));
                }
                else{
                    if(data[i-1]>data[i]){
                        for(int j=0;j<data[i-1]-data[i];j++){
                            test1.push_back(')');
                        }
                        test1.push_back((data[i]+48));
                    }
                    else if(data[i-1] == data[i]){
                        test1.push_back((data[i]+48));
                    }
                    else{
                        for(int j=0;j<data[i]-data[i-1];j++){
                            test1.push_back('(');
                        }
                        test1.push_back((data[i]+48));
                    }
                }
            }
            if(i==data.size()-1 && data[i] != 0 ){
                 for(int j=0;j<data[i];j++){
                            test1.push_back(')');
                        }
            }
        }
        
        ans.insert({j,test1});
        test1.clear();
        j++;
    }
    
    for(auto itr=ans.begin();itr != ans.end();itr++){
        cout<<"Case #"<<itr->first<<":"<<" ";
        for(char x : itr->second){
            cout<<x;
        }
        cout<<endl;
    }
}

