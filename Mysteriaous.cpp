#include <iostream>
#include <cmath>
#include<cstdlib>
#include <stdio.h>

#include <stdlib.h>

#include<time.h>

using namespace std;

int main()
{
    cout << "\n\n Check overflow/underflow during various arithmetical operation :\n";
    int x =  50;
    srand(time(0));

    for(int i=0; i<50; i++){
        int output =  rand()%x;
        cout << output << " , ";

    }

   return 0;
}
