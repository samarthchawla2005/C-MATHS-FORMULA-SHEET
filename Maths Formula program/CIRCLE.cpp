#include<iostream>
using namespace std;

//CIRCLE
    //AREA
    float area(float r){
        return(3.14*r*r);
    }
    //CIRCUMFERENCE
    float cfc(float r){
        return(2*3.14*r);
    }
int main(){
    float r;
    cout<<"Enter the radius of the circle"<<endl;
    cin>>r;
    cout<<"The Area of circle on the basis of given radius is "<<area(r)<<endl;
    cout<<"The circumference of circle on the basis of given radius is "<<cfc(r)<<endl;

    return 0;
}