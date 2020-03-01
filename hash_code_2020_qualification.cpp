#include<iostream>
#include<vector>
#include<utility>
#include<bits/stdc++.h>
#include<map>
using namespace std;

vector<int> read(vector<int> &take,vector<long> &scanned_books,int days,int scan){
    vector<int> aa;
    int size = 0;
    int day = scan*days;
    while(day>0 && size<take.size()-2){
        if(scanned_books[take[size]]==0){
            aa.push_back(take[size]);
            scanned_books[take[size]] = 1;
            day--;
        }
        size++;
    }
    return aa;
}

int main(){
    int book_score,lib_no,days,k;
    vector<vector<int>> lib_detailsl; //space complex = lib_no
    vector<int> temp; //temp
    multimap<double,pair<int,vector<int>>>queue;
    multimap<double,pair<int,vector<int>>>::reverse_iterator itr;
    pair<int,vector<int>> aa; //temp
    cin>>book_score>>lib_no>>days;
    vector<long> score; //space complex = book_score
    vector<long> scanned_books(book_score); //space complex = book_score
    vector<pair<int,vector<int>>> output;  //space complex = totally different###
    
    for(int i=0;i<book_score;i++){
        cin>>k;
        score.push_back(k);
    }

    int book_no,login,scan;

    double percent;
    for(int i=0;i<lib_no;i++){
        cin>>book_no>>login>>scan;
        percent = (((double)book_no/(double)book_score)*100.0) + ((1-((double)login/(double)days))*100.0);
        temp.clear();
        for(int j=0;j<book_no;j++){
            cin>>k;
            temp.push_back(k);
        }
        temp.push_back(login);
        temp.push_back(scan);
        aa.first = i;
        aa.second = temp;
        queue.insert(pair<float,pair<int,vector<int>>>(percent,aa));
  
    }
    itr = queue.rbegin();
    
    while(days>0 && itr != queue.rend()){
        temp.clear();
        days-= *(itr->second.second.end()-2);
        if(days<1){
            break;
        }
        temp = read(itr->second.second,scanned_books,days,*(itr->second.second.end()-1));
        aa.first = itr->second.first;
        aa.second = temp;
        output.push_back(aa);
        itr++;
    }

    // for(int i=0;i<lib_no;i++){
    //     cin>>book_no>>login>>scan;
    //     temp.clear();
    //     for(int j=0;j<book_no;j++){
    //         cin>>k;
    //         temp.push_back(k);
    //     }
    //     temp.push_back(login);
    //     temp.push_back(scan);
    //     lib_detailsl.push_back(temp);
    // }
    
    // int count=0;
    

    // while(days>0 && count!=lib_no){
    //     temp.clear();
    //     days-= *(lib_detailsl[count].end()-2);
    //     if(days<1){
    //         break;
    //     }
    //     temp = read(lib_detailsl[count],scanned_books,days,*(lib_detailsl[count].end()-1));
    //     aa.first = count;
    //     aa.second = temp;
    //     output.push_back(aa);
    //     count++;
    // }
    cout<<endl;
    //output
    cout<<output.size()<<endl;
    for(int i=0;i<output.size();i++){
        cout<<output[i].first<<" "<<output[i].second.size()<<endl;
        for(int j : output[i].second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
   
}
