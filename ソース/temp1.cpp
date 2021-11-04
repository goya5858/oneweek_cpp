#include <iostream>
#include <string>

using namespace std;

template <typename T>
T add(T x, T y){
    return x + y;
}

int main(void){
    cout << add<int>(4,3) << endl;
    cout << add<string>("ABC", "EFG") << endl;
    cout << add(1,2) << endl;
    //cout << add("abc", "efg") << endl;
    cout << add(1.0,2.0) << endl;
    return 0;
}