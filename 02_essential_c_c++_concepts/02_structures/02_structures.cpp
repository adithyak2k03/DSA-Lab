#include<iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
    char x[5];
};

int main(){
    struct Rectangle r1 = {10,5};

    r1.length = 12;
    r1.breadth = 7;

    // cout<<sizeof(r1);
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;

}


// Notes

// If size of structure is sum of its members sizes.

// say if you have 2 int types, size is 4+4 = 8.

// If you add a char of size 1 ( char x[1]), you'd expect size of structure is now 9.
// But its 12 because its easier for the compiler to allocate memory of same size, so it allots 4 bytes of char x[1] 

// This is done to character data types. It would take nearest greater size.

// This is called padding of memory inside structures.