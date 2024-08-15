#include<iostream>
using namespace std;


//CUBOID
 //Lateral Surface Area
    int lsa(int h , int l, int b){
        return(2*h*l+2*h*b);
    }
//Total Surface Area
    int tsa(int h , int l, int b){
        return(2*l*b+2*h*b+2*h*l);
    }


int main(){

//CUBOID
    int h; int l; int b ;
    cout<<"Enter height"<<endl;
    cin>>h;
    cout<<"Enter length"<<endl;
    cin>>l;
    cout<<"Enter breadth"<<endl;
    cin>>b;
    cout<<"The Lateral surface area for the cuboid of the given height , length & breadth is: "<<lsa(h,l,b) <<" square units"<<endl;
    cout<<"And the Total surface area for the cuboid of the given height , length & breadth is: "<<tsa(h,l,b) <<" square units"<<endl;

   return 0;
}