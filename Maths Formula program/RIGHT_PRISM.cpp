#include<iostream>
using namespace std;

//RIGHT PRISM
 //Lateral Surface Area (LSA)
    int lsa(int bp, int h){
        return(bp*h);
    }
 //Total Surface Area (TSA)
    int tsa(int ba, int bp, int h){
        return(2*ba+bp*h);
    }

int main(){
    int bp; int h; int ba;
    cout<<"Enter Base Perimeter of right prism"<<endl;
    cin>>bp ;
    cout<<"Enter Height of right prism"<<endl;
    cin>>h ;
    cout<<"Enter Base Area of right prism"<<endl;
    cin>>ba ;
    cout<<"The Lateral surface area of right prism on the basis of given base perimeter and height of right prism is:"<<lsa(bp, h)<<endl;
    cout<<"The Total surface area of right prism on the basis of given base perimeter, height and base area of right prism is:"<<tsa(ba, bp, h)<<endl;
    return 0;
}