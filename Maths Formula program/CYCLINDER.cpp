#include<iostream>
using namespace std;

//CYCLINDER
//LATERAL/CURVED SURFACE AREA
int lcsa(int r, int h){
    return(2*3.14*r*h);
}
//TOTAL SURFACE AREA
int tsa(int r, int h){
    return(2*3.14*r*h+2*3.14*r*r);
}

int main(){
    int r; int h;
     cout<<"Enter the radius of cyclinder"<<endl;
    cin>>r;
    cout<<"Enter the height of cyclinder"<<endl;
    cin>>h;
    cout<<"The Lateral/Curved surface area of cyclinder on the basis of given radius and height of cyclinder is:"<<lcsa(r,h) <<" square units"<<endl;
    cout<<"The Total surface area of cyclinder on the basis of given radius and height of cyclinder is:"<<tsa(r,h) <<" square units"<<endl;
    return 0;
}