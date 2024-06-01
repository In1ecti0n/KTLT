#include <iostream>

using namespace std;

void toUpper(string* s) { // string* s:khai bao con tro s. con tro s chi toi dia chi cua bien a
    for (int i = 0; i < (*s).size(); i++){ // *s: gia tri cua dia chi bien a
        if ((*s)[i] >= 'a' && (*s)[i] <= 'z'){
            (*s)[i] -= 32;
        }
    }
}

int main() {
	string a;
	cin >> a;
	toUpper(&a); //string (dia chi cua bien a)
	cout << a;
	return 0;
}