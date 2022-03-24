#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    x =10, y =50 , z=80;
    cout << "\n always execute to find greatest number out of 3 !! \n" ;
    // syntax
   // variable =  condition ? true-value : false-value;
   // this is for 2 variable
   string output2 = (x <y) ? "\n  y is greater than all" : "\n  x is greater than all";
   cout << output2 <<endl;
   //this is for three variable
   string output = (x <y) ? (y < z) ? "\n  z is greater than all" : "\n  y is greater than all" : "\n  x is greater than all";
   cout << output;

return 0;
}
