#include<iostream>
using namespace std;

int main(){
 int day;
 cout<<"please enter the value for getting day :";
 cin>>day;
 // snytax
 // switch(){
 /*  case 1 :
       cout << "monday" ;
       break;

 }*/
 switch(day){
 case 1:
     cout << "monday";
     cout <<"addition of two number : " <<10+20;

 case 2:
     cout << "Tuesday";

 case 3:
     cout << "Wednesay";
     break;
 case 4:
     cout << "day 3";
     break;
 case 5:
     cout << "day 4";
     break;
 case 6:
     cout << "day 5";
     break;
 case 7:
     cout << "day 6";
     break;
 default:
    cout << "Not a valid day";
     break;

 }
 cout << "\n\n\n we get the break and we are out of switch !!!";
return 0;
}
