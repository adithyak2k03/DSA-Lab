#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int a = 10; // data variable

    int *p; // DECLARATION Address variable (pointer) 

    p = &a; // Initialization of pointer (it occupies a memory in stack memory)

    cout<<p<<" : "<<*p<<endl; // DeReferencing pointer

    int *p2;

    p2 = (int*)malloc(5 * sizeof(int)); // malloc() returns a void pointer, so we need to cast it to integer
    
    //The above line allocates a integer array of size 5 in heap memory 
    // So pointer will store the first element of that array 
    cout<<p2<<" : "<<*p2<<endl;

    // c++ version
    int *p3 = new int[5];

    cout<<p3<<" : "<<*p3<<endl;
}

// pointers are address variable, meant for storing address of data
// used to access data indirectly

//Q.1 // why do we need to access data indirectly?
// in Main memory, there are 3 parts, code , stack, heap
// Code section cannot directly access stuff in heap memory
// pointers are used to access resources outside the program(like hard disks)
//2 uses of pointers:
    // Accessing heap memory
    // Accessing Resources outside the program
    // Used for Parameter passing

// EVERY variable declared it will be inside stack
// If we want to allocate memory in heap, we use MALLOC

// ==================================================================================================

// for pointer pointing to integer

// int a = 10;
// int *p;
// p = &a;
// cout<<p<<*p;

// for pointer pointing to array
// int A[5] = {2,4,6,8,10};
// int *p;

// p = A
// we need not write & because A itself is the address of that array
// if we want to use &
// p = &A[0];

//// p = &A is WRONG

// accessing array elements using pointer
// for(int i=0;i<5;i++){
//     // cout<<A[i]<<endl;
//     cout<<p[i]<<endl;
// }

// So p is a pointer which can act as name of the array

// ----------------------------
// Creating an array in heap using pointer

// C-Lang
// #include<stdlib.h>
// int *p;
// p = (int *)malloc(5*sizeof(int))

// p is in stack. , the array of 5 integers is in heap

// p[0] = 10; p[1] = 23; p[2] = 36; p[3] = 41; p[4] = 59;

// for(int i=0;i<5;i++)
//     cout<<p[i]<<endl;

// C++ Lang
// int *p;
// p = new int[5];

// We have consumed dynamically allocated memory in heap using pointer now. After end of the program
// we have to deallocate that memory

// in C++
// if array pointer
    // delete [ ] p;
// if any other pointer
    // delete p;

// in C
// free(p)

// in small scale programs this de allocation of memory is not a big concern
// anyways once the program ends, the heap is automatically deleted

// in large scale programs/projects it is must

// -------------------------

// we define
// int *p1;
// float *p2;
// double *p3;
// char *p4;
// struct Rectangle *p5;

// All have same size = 8 bytes // my compiler takes 4

// whatever data type of pointer is pointer takes same amount of memory




