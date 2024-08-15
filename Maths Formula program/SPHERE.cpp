#include<iostream>
using namespace std;

//SPHERE
//Lateral Surface Area = Total Surface Area
 int ltsa(int r){
    return(4*3.14*r*r);
 }


int main(){
    int r;
    cout<<"Enter the radius of cone"<<endl;
    cin>>r;
    cout<<"The Lateral surface area of Sphere on the basis of given radius is:"<<ltsa(r)<<endl;
    cout<<"The Total surface area of Sphere on the basis of given radius is:"<<ltsa(r)<<endl;
    cout<<"➡️ As the Lateral Surface are and Total Surface Area of Sphere are Same so"<<"Lateral surface area of Sphere"<<ltsa(r)<<"="<<"Total surface area of Sphere "<<" = "<< ltsa(r)<<endl;

    return 0;
}