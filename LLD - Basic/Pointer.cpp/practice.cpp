#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int *ptr = &a;

    cout << a << endl;
    cout << &a << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    (*ptr)++;
    cout << a << endl;
    return 0;
}