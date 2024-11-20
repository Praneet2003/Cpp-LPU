#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<arr.size()-1;i+=2){//swap the alternate elements.
        swap(arr[i],arr[i+1]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}