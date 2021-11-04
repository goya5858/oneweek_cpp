#include <iostream>

using namespace std;

void swap(int&, int&);

int main(void){
    int a=1, b=2;
    cout << "a = " << a << " b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}

void swap(int& a, int& b){
    int tmp;
    tmp = b;
    b = a;
    a = tmp;
}