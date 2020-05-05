#include<iostream>
#include<vector>
#include<map>

struct ansSeconf{
    int k;
    int r;
    int c;
};

using namespace std;



int main(){
    ansSeconf t;
    int test,k,r,c,N,row,col,num,flag;
    cin>>test;
    map<int,ansSeconf> ans;
    vector<int> temp;
    vector<vector<int>>data;
    int j=1;
    while(j<=test){
        k=r=c=row=col=num=0;
        cin>>N;
        for(int i=0;i<N;i++){
            temp.clear();
            for(int j=0;j<N;j++){
                cin>>num;
                temp.push_back(num);
            }
            k+=temp[row];
            row++;
            data.push_back(temp);
        }
        //for rows 
        for(int i=0;i<N;i++){
            flag=0;
            for(int j=0;j<N;j++){
                for(int l=0;l<N && l!=j;l++){
                    if(data[i][j]==data[i][l]){
                        flag=1;
                        break;
                    }
                }
            }
            if(flag == 1){
                r++;
            }
        }
        //for columns
        for(int i=0;i<N;i++){
            flag=0;
            for(int j=0;j<N;j++){
                for(int l=0;l<N && l!=j;l++){
                    if(data[j][i]==data[l][i]){
                        flag=1;
                        break;
                    }
                }
            }
            if(flag == 1){
                c++;
            }
        }
        t.k = k;
        t.c = c;
        t.r = r;
        ans.insert({j,t});
        data.clear();
        j++;
    }
    for(auto itr=ans.begin();itr != ans.end();itr++){
        cout<<"Case #"<<itr->first<<":"<<" "<<itr->second.k<<" "<<itr->second.r<<" "<<itr->second.c<<endl;
    }
}