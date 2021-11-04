#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void){
  	string s;
	cin >> s;
    if (s[s.size()-1]=='r'){
        cout << "er" << endl;
    }
    else{
        cout << "ist" << endl;
    }
    
    return 0;
}