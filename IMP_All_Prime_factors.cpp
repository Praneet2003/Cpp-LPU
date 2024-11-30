// You are using GCC
#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int s,e;
    cin>>s>>e;
    for(int i=s;i<e;i++){
        if(isprime(i)){
            if(i>1)
            cout<<i<<" ";
        }
    }
}