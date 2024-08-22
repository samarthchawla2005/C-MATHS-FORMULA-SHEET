#include<iostream>
using namespace std;

//RECTANGLE
    //AREA
    int area(int l, int b){
        return(l*b);
    }
    //Perimeter
    int peri(int l, int b){
        return(2*(l+b));
    }

int main(){
    int l, b;
    cout<<"Enter Length of the rectangle"<<endl;
    cin>>l;
    cout<<"Enter breadth of the rectangle"<<endl;
    cin>>b;
    cout<<"The area of rectangle as per the given length and breadth is "<<area(l,b)<<endl;
    cout<<"The perimeter of rectangle as per the given length and breadth is "<<peri(l,b)<<endl;

    
    return 0;
}