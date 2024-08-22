#include<iostream>

using namespace std;

    //SQUARE
     //AREA
     int area(int s){
        return(s*s);
     }
     //PERIMETER
     int peri(int s){
        return(4*s);
     }
/*     //DIAGONAL
     double diag(double si) {
        return sqrt(2)*si;
     }
*/

int main(){
    int s; //double si;
    cout<<"Enter the side of a square"<<endl;
    cin>>s; //si;
    cout<<"The Area of a Square according to the given side of square is "<<area(s)<<endl;
    cout<<"The Perimeter of a Square according to the given side of square is "<<peri(s)<<endl;
//  cout<<"The Diagonal of a Square according to the given side of square is "<<diag(si)<<endl;
    
    return 0;
}