// only avaible in C++


#include<iostream>

using namespace std;

int main(){

    int a = 10;
    int &r = a;  // if you dont initialize when declaring a reference, it will throw an error.
    // We cannot change the reference to point to another variable, YOU CANNOT CHANGE Reference

    r= 25;

        int b=30;
    r=b;
    cout<<a<<endl<<r<<endl;
}


// Reference = nickname/Alias to a variable

//  int a = 10;

//  int &r = a; // its a reference 

// in the stack memory, a initially occupies a memory space, when reference r is defined, now r also occupies the same space

// So if you alter either a or r it affects the both of them


// --------------------
// Q.1 Why do we need them?

// Useful in parameter passing
// Also in small functions we use references instead of pointers