#include <iostream>

using namespace std;

int main(void){
    int a = 7;
    int &n = a;
    cout << a << endl;
    n = 10;
    cout << a << endl;
}