#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int square(int n){
    return n*n;
}
int main(){
    vector<int> a = {1,2,3,4,5,6,7,8,9,5,10,5,6,3,5,9};
    transform(a.begin(),a.end(),a.begin(),square);
    for(int i:a){
        cout<<i<<" ";
    }
}