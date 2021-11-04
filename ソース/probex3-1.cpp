#include <iostream>
#include <string>

using namespace std;

template <typename T> 
T max2(T a, T b){
	if (a > b) {
		return a;
	}
	return b;
}

int main(){
	cout << max2<int>(1, 2) << endl;
	cout << max2<double>(1.75, 3.12) << endl;
	string s1 = "aiu", s2 = "eo";
	cout << max2<string>(s1, s2) << endl;
	return 0;
}

