#include<iostream>
using namespace std;

    //CONE
     //Curved Surface Area (CSA)
        int csa(int r, int l){
             return(3.14*r*l);
        }
           
     //Total Surface Area (TSA)
        int tsa(int r, int l){
            return(3.14*r*r + 3.14*r*l);
        }

int main(){
    int r; int l;
    cout<<"Enter the radius of cone"<<endl;
    cin>>r;
    cout<<"Enter the slant height of cone"<<endl;
    cin>>l;
    cout<<"The Curved surface area of cone on the basis of given radius and slant height of cone is:"<<csa(r,l)<<endl;
    cout<<"The Total surface area of cone on the basis of given radius and slant height of cone is:"<<tsa(r,l)<<endl;
    return 0;
}