#include<iostream>
using namespace std;

int main(){
    // int *num = new int;
    // *num = 10;
    // cout << *num << endl;
    // cout << num << endl;
    // delete num;

    int *arr = new int[5]; // here 5 is size of array
    arr[0] = 10;
    arr[1] = 20;
    *(arr+2) = 30;
    *(arr+3) = 40;
    *(arr+4) = 50;

    // printing array
    for(int i=0; i<5; i++){
        cout << *(arr + i) << " ";
        // cout << arr[i] << " ";
    }


    return 0;
}