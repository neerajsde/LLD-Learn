#include<iostream>
using namespace std;

void fun(int arr[]){
    cout << "Inside the function: " << sizeof(arr) << endl; // maje sure to pass size of array
}

int main(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(int);
    cout << "Size of Array: " << size << endl;

    fun(arr); // this function print size of arr <---- wrong 

    return 0;
}