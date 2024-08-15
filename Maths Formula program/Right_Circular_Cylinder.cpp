#include<iostream>
using namespace std;

    // Right Circular Cylinder
     //Lateral Surface Area (LSA)
        int lsa(int r, int h){
            return(2*3.14*r*h);
        }
     //Total Surface Area (TSA)
        int tsa(int r, int h){
            return(2*3.14*r*r + 2*3.14*r*h);
        }

int main(){
    int r; int h;
    cout<<"Enter radius of the Right Circular Cylinder"<<endl;
    cin>>r;
    cout<<"Enter height of the Right Circular Cylinder"<<endl;
    cin>>h;

    cout<<"The Lateral surface area of Right Circular Cylinder on the basis of given radius and height of Right Circular Cylinder is:"<<lsa(r, h)<<" square units"<<endl;
    cout<<"The Total surface area of Right Circular Cylinder on the basis of given radius and height of Right Circular Cylinder is:"<<tsa(r, h)<<" square units"<<endl;

    return 0;
}