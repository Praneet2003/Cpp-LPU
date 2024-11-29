// You are using GCC
#include<iostream>
using namespace std;
class Rectangle{
    static int count;
    int l;
    int b;
    public:
    Rectangle(){
        l=0;
        b=0;
        count++;
    }
    static int cnt(){
        return count;
    }
    void setDimensions(int l,int b){
        this->l=l;
        this->b=b;
    }
    int getArea(){
        return l*b;
    }
    
};
int Rectangle:: count=0;
// int Rectangle:: cnt();
int main(){
    int n;
    cin>>n;
    Rectangle r[n];
    for(int i=0;i<n;i++){
        int l, b;
        cin>>l>>b;
        r[i].setDimensions(l,b);
    }
    cout<<"Total number of rectangles: "<<Rectangle::cnt()<<endl;
    for(int i=0;i<n;i++){
        cout<<"Area of rectangle "<<i+1<<": "<<r[i].getArea()<<endl;
    }
    return 0;
}