#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    x =60, y =50 , z=40;
    cout << "\n always execute to find greatest number out of 3 !!" ;
     if(x <y){

         if(y < z) {
           cout <<"\n  z is greater than all";
         }
         else{
            cout <<"\n  y is greater than all";
         }
     }else if (x>z){
         cout <<"\n  x is greater than all";
     }


return 0;
}
