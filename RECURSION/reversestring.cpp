#include<iostream>
using namespace std;

string reverseString(string &str, int start,int end) {
    if (start >= end) {
        return str;
    }
    
    swap(str[start], str[end]);
    
    return reverseString(str, start + 1, end - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    reverseString(str, 0, str.length() - 1);
    
    cout << "Reversed string: " << str << endl;
    
    return 0;
}
