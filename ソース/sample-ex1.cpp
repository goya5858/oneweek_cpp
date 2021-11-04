#include <iostream>

using namespace std;

void ref(int&);
void print(int);

int main(void){
    int n = 5;
    print(n);

    ref(n);
    print(n);
}

void ref(int & n){
    n = 1;
}

void print(int n){
    cout << "n=" << n << endl;
}