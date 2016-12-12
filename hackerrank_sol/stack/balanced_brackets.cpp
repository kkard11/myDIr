// {{}}

#include <iostream>
#include <stack>

using namespace std;

bool isequal(char first, char second) {
    if (first == '(' && second == ')')
        return true;
    if (first == '{' && second == '}')
        return true;
    if (first == '[' && second == ']')
        return true;
    if (first == '<' && second == '>')
        return true;

    return false;
}

bool isbalance(string str) {
    stack<char> s;

    for (int i=0; i<str.length(); i++) {
        if (str[i] == '{' || str[i] == '[' || str[i] == '<' || str[i] == '('){
                s.push(str[i]);
            }
        else {
            if (!isequal(s.top(), str[i]) || s.empty())
                return false;
            else
                s.pop();
        }
    }

    if (s.empty())
        return true;
    else
        return false;
}


int main() {
    int n;
    string str;
    cin >> n;
    for (int i=0; i<n; i++){
            cin >> str;
            if (isbalance(str))
                cout << "YES\n";
            else
                cout << "NO\n";
    }

    return 0;
}
