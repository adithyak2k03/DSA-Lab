#include<iostream>
#include<stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r={10,5};

    struct Rectangle *p =&r;
    // cout<<sizeof(r)<<endl<<sizeof(p)<<endl<<endl;

    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    cout<<p->length<<endl;
    cout<<p->breadth<<endl;



    // For regular structure member you can access by dot operator r.length

    // for pointer u can do the same but not exactly

    // *p.length // will throw error because precedence of operators . comes before * so it tries to fetch p.length which does not exists

    // so we do

    cout<<(*p).length<<endl;

    // or 
    
    cout<<p->length<<endl<<endl;


    // ---------------------
    // Creating an object dynamically in heap using pointer
    // ---------------------

    struct Rectangle *p1, *p2;

    p1 = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // in C

    p2 = new Rectangle; // in c++
    
    p1->length = 15;
    p1->breadth = 7;

    p2->length = 30;
    p2->breadth = 15;


    cout<<p1->length<<endl;
    cout<<p1->breadth<<endl;
    // cout<<p1->length<<endl<<p1->breadth;

    cout<<p2->length<<endl;
    cout<<p2->breadth<<endl;

}