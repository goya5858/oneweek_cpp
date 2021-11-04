#include <iostream>
#include <string>

using namespace std;

int main(void){
    string s, t;
    t = "入力された文字列は、";
    cout << "文字列を入力" << endl;
    cin >> s;
    cout << t+s << "です" << endl;
}