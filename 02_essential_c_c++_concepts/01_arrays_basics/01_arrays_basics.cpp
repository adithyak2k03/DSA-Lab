#include<iostream>

using namespace std;

int main(){

    
    // int A[5] = {2,3,4,5,6};

    // int B[10] = {23,43,67,87,21};
    // A[0] = 12;
    // A[1] = 15;
    // A[2] = 25;

    // cout<<sizeof(A)<<endl;
    // cout<<sizeof(A[0])<<endl;
    // cout<<A[0]<<endl;

    // printf("%d\n", A[2]);

    // printf("%d\n", B[5]);
    // printf("%d\n", B[6]);

    // printf("%d\n", B[7]);
    // printf("%d\n", B[8]);
    // printf("%d\n", B[9]);

    // printf("%d\n", B[10]);

    // int A[10] = {0};  // all elements are zero

    // for(int i=0;i<5;i++){
    //     cout<<B[i]<<endl;
    // }

    int n;
    cout<<"Enter size";
    cin>>n;

    int B[n] = {1,3,5,7,9};

    for (int x: B){
        cout<<x<<endl;
    }




    return 0;
}

// Notes:

// If the array size is declared and data not initialized, it would have 0 in the uninitialized indices.

// If the your trying to access indices of an array more than what you declared, it will throw garbage values.