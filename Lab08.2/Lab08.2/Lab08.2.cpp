#include <iostream>
#include <string>
using namespace std;

size_t RemoveSpacesBeforePunctuation(string& s) {
    size_t start = 0;
    size_t len = s.length();

    while ((start = s.find_first_of(" ", start)) != -1) {
        size_t nextChar = s.find_first_not_of(" ", start);
        if (nextChar != -1 && (s[nextChar] == '.' || s[nextChar] == ',' 
            || s[nextChar] == '!' || s[nextChar] == '?' || s[nextChar] == ':' 
            || s[nextChar] == ';')) {
            s.erase(start, nextChar - start); 
            len = s.length(); 
        }
        else {
            start = nextChar;  
        }
    }
    return len;  
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    size_t newLength = RemoveSpacesBeforePunctuation(str);

    cout << "Processed string: " << str << endl;
    cout << "New length of the string: " << newLength << endl;

    return 0;
}
