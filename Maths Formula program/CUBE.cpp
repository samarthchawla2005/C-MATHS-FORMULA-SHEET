#include<iostream>
using namespace std;

//CUBE
 //Lateral Surface Area
    int lsa(int a){
        return(4*a*a);
    }
 //Total Surface Area
    int tsa(int a){
        return(6*a*a);
    }

int main(){
    int a;
    cout<<"Enter side of cube"<<endl;
    cin>>a;
    cout<<"The Lateral surface area for the cube of the given side is: "<<lsa(a) <<" square units"<<endl;
    cout<<"The Total surface area for the cube of the given side is: "<<tsa(a) <<" square units"<<endl;
    return 0;
}