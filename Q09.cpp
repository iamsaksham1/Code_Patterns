#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=n-i-1; j>=0; j--){
            cout<<" ";
        }
        for(int k=1; k<=i*2-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}