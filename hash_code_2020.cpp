#include<iostream>

using namespace std;

int main(){
    int max , pizz;
    cin>>max>>pizz;
    int a[1000];
    int sum=0;
    int flag = 0;

    for(int i=0;i<pizz;i++){
        cin>>a[i];
    }

    for(int i=0;i<pizz;i++){
        sum += a[i];
    }
    if(sum <= max){
        cout<<endl;
        cout<<pizz<<endl;
        for(int i=0;i<pizz;i++){
            cout<<i<<" ";
        }
    }
    else{
        int c=0;
        while(c != pizz){
            for(int j=c;j<pizz;j++){      
                for(int i=c;i<pizz;i++){    
                    if(i!=j){
                        sum += a[i];
                    }
                }
                if(sum <= max){
                    cout<<endl;
                    cout<<(pizz-c-1)<<endl;
                    for(int i=c;i<pizz;i++){
                        if(i!=j){
                            cout<<i<<" ";
                        }
                    }
                    flag = 1;
                }
                if(flag == 1){
                    break;
                }
                sum = 0;
            }
            if(flag == 1){
                    break;
            }
            c++;
        }
    }

}