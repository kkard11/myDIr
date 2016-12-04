#include <iostream>
#include <string>

using namespace std;

string cipherText(string text, int key){
    string result = "";
    for (int i=0; i<text.length(); i++){
        if(isalpha(text[i])){
            if (isupper(text[i])){
                int temp = text[i];
                temp = temp - 65 + key;
                temp = temp%26;
                temp = temp + 65;
                result = result + (char)temp;
            }

            else
            {
                int temp = text[i];
                temp = temp - 97 + key;
                temp = temp%26;
                temp = temp + 97;
                result = result + (char)temp;

            }
        }
        else {
            result = result + text[i];
        }
    }
    return result;
}


int main(){
    string s;
    int k;
    cin >> s;
    cin >> k;
    cout << cipherText(s,k);
    return 0;
}
