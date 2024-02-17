#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout << num << endl;

    // Refference Variable
    int &val = num;
    cout << val << endl;

    val++;

    cout << num << endl;
    cout << val << endl;

    return 0;
}