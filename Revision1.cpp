#include <iostream>
using namespace std;

int main(){
int age = 23;
string firstname = "Radhe ";
string lastname = "Shyam";
string fullname =  firstname+lastname;
string moviename =  fullname.append(firstname);
string moviename2 =  fullname.append(" Radhe");
cout <<"Age of the person : "<< age<<endl;
cout <<"Hello new ear !!!";
cout <<"\nYour complete name is : "<<fullname;
cout << "\nComplete movie name : " << moviename;
cout << "\nComplete movie name : " << moviename2;
string a = "2";
string b =  "2";
cout << "addition of two string : " <<a+b;
return 0;
}
