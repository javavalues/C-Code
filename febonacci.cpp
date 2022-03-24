// febonacci series code
#include <iostream>
using namespace std;

int main()
{
    cout << "\n\n Febonacci series  :  addition of previous two number become thirs\n";
    //0 1  1  2  3  5  8  13  21   34......
     int x =0; int y =1;int limit;

     cout << "Please enter the limit of febonacci :";
     cin >> limit ;
     int nextvalue = 0 ;
     cout << x << " , " << y << " , ";
     for (int i =0;i <limit ;i++){
       nextvalue = x+y;
       cout << nextvalue << " , ";
       x=y;
       y=nextvalue;

     }

     cout << "\n\n ****Swap of two number using third number";
     int a =  10, b=20;
     cout << "\n value of a  : "<< a;
     cout << "\n value of b  : "<< b;

     int temp;
     // swapping
     temp = a;
     a=b;
     b=temp;

     cout << "\n\n **After swap : ";
     cout << "\n value of a  : "<< a;
     cout << "\n value of b  : "<< b;

   return 0;
}
