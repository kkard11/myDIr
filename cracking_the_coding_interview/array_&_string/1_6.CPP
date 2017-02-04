//String Compression: Implement a method to perform basic string compression using the counts
//of repeated characters. For example, the string aabcccccaaa would become a2blc5a3. If the
//"compressed" string would not become smaller than the original string, your method should return
//the original string. You can assume the string has only uppercase and lowercase letters (a - z).


/* in python ----
def string_compress(mystr):
    if len(mystr)<1:
        return
    count = 1
    out = ''
    for i in range(len(mystr)-1):  -->to avoid index error so I use len(mystr)-1 instead len(mystr)
        if mystr[i] == mystr[i+1]:
            count = count + 1
        else:
            out = out + mystr[i]
            out = out + str(count)
            count = 1
    out = out + mystr[len(mystr)-1] + str(count)
    return out

print string_compress('')
*/



#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

//char *string_compress(char *str) {
//    int len = strlen(str);
//    char *in = str;
//    char *out = new char [2*len+1];
//    int j=0;
//    int cnt = 1;
//    for (int i=0; i<len; i++){
//        if (in[i] == in[i+1]){
//            cnt++;
//
//        }
//        else {
//            out[j] = in[i];
//            j++;
//            out[j] = cnt + '0';
//            j++;
//            cnt = 1;
//        }
//        out[j] = '\0';
//    }
//
//    return out;
//}

char *string_compress(string str){
    int len = str.length();
    char *out = new char[2*len+1];
    int cnt = 1;
    int j=0;
    for (int i=0; i<len; i++){
        if (str[i] == str[i+1]){
            cnt++;
        }
        else {
            out[j] = str[i];
            j++;
            out[j] = cnt + '0';
            j++;
            cnt = 1;
        }
        out[j] = '\0';
    }
    return out;
}

int main() {
    //char str[256] = {0};
    string str;
    cin >> str;
    //cout << str;
    cout << string_compress(str) << endl;
    return 0;
}
