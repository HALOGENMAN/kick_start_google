#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
using namespace std;

bool f(int x,int y){ //comparatof function to sort in reverse order
    return x>y;
}
void vector_demo(){
    vector<int> A = {11,2,3,4};
    //cout<<A[1]<<endl;
    sort(A.begin(),A.end());
    
    bool present = binary_search(A.begin(),A.end(),3);
    //cout<<present<<endl;
    present = binary_search(A.begin(),A.end(),100);
    //cout<<present<<endl;
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    //vector<int>::iterator it = lower_bound(A.begin(),A.end(),100);//>=
    auto it = lower_bound(A.begin(),A.end(),100); // this is used instad of using vector<int>::iterator
    vector<int>::iterator it2 = upper_bound(A.begin(),A.end(),100);//>
    //cout<<*it<<" "<<*it2<<endl; 
    //cout<<it2-it<<endl;
    sort(A.begin(),A.end(),f);
    //vector<int>::iterator it3;
    /*for(it3=A.begin();it3 !=A.end();it3++){
        cout<<*it3<<" ";
    }*/
    for(int &x: A){
        x++;
        cout<<x<<" ";
    }
}
void set_demo(){
    set<int> S;//this will insert the element in asending order
    S.insert(1);
    S.insert(2);
    S.insert(3);
    S.insert(-1);
    S.insert(-10);
    /*
    for(int x: S){ //printing out the value of S
        cout<<x<<" ";
    }
    */
    /* find ing the element is present or not
    auto it = S.find(-1);
    if(it == S.end()){
        cout<<"\n not present"<<endl;
    }
    else{
        cout<<*it<<" it is present"<<endl;
    }
    */
   // finding the upperbound \lowerbound
   auto it2 = S.lower_bound(22);   
        //we can also erase an element bu using S.erase(1)
    /*
   //cout<<*it2<<endl; //1
    if(it2 == S.end()){
        cout<<"\n OOOppsss it is not present"<<endl;
    }
    else{
        cout<<"\n number is found "<<*it2<<endl;
    }
    */
}
void map_demo(){
    map<int,int> A;
    A[1]=100;
    A[2]=-1;
    A[3]=200;
    A[10000232]=1;
    map<char,int>cnt;
    string x = "shayak malakar";
    
}
int main(){
    //vector_demo();
    //set_demo();
    map_demo();
}