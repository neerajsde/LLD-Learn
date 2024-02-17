#include<iostream>
using namespace std;

// This is Refference Variable
void slove(int &a){
    cout << "Inside the Function" << endl;
    a++;
    cout << a << endl;
}

int main(){
    int a = 10;
    cout << a << endl;

    slove(a); 

    cout << "Out the function" << endl;
    cout << a << endl;
    return 0;
}