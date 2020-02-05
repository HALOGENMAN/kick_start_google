#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
   vector<int> v = {10,20,50,60};
   int maxElementIndex = max_element(v.begin(),v.end()) - v.begin();
   cout<<maxElementIndex<<" "<<v[maxElementIndex];
}