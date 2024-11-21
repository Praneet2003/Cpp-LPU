#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool odd(int n){
    if(n%2!=0){
        return true;
    }else{
        return false;
    }
}
int main(){
    vector<int> a = {1,2,3,4,5,6,7,8,9,5,10,5,6,3,5,9};
    vector<int> b(a.size(),-1);//initializing all elements of vector with -1 
    copy_if(a.begin(),a.end(),b.begin(),odd);//ood is a bool function which will allow only odd number to be copied.
    //b.begin +5 is the startign location of vector b where to copy the elements........
    for(int i:b){
        cout<<i<<" ";
    }
}