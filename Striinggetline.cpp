#include <iostream>
//using namespace std;
#include <string>

int main(){

string firstname, secondname;

//cout << "please enter the value of firstname : ";
//cin >> firstname;
//cout << "cin value of firstname : " << firstname ;

std :: cout << "please enter the value of secondname : ";
getline(cin ,secondname);
std :: cout << "getline value of secondname : " << secondname ;

return 0;
}
