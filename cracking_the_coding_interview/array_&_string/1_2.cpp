//Write code to reverse a C-Style String. (C-String means that “abcd” is represented as five characters, including the null character.)


// if there is no such space complexity issue we could have used stack or may be created a string by appending each char in reverse order
// but let's try to reverse the string in place.

#include <iostream>
#include <string>
using namespace std;

void reverse_string(char *mychar, int len) {
    if (len<=0)
        return;
    //cout << len << endl;
    int start = 0;
    int End = len-1;
    char temp;

    while (start < End) {

        temp = mychar[start];
        mychar[start] = mychar[End];
        mychar[End] = temp;
        start++;
        End--;
    }
}


//following method use extra buffer and return char pointer
char *reverse_string_extra_buffer(char *mychar, int len) {
    if (len <= 0)
        return 0;
    char *out_string = new char[len];
    int end = len-1;
    int i=0;
    while (end >= 0){
        out_string[i] = mychar[end];
        end--;
        i++;
    }
    out_string[i] = '\0';
    return out_string;
}

int main() {

    char mychar[]="1234";
    int len = sizeof(mychar)/sizeof(mychar[0]); // this is little confusing not sure if it always works
    //reverse_string(mychar, len-1);

    char *myout;
    myout = reverse_string_extra_buffer(mychar, len-1);

    cout << "reverse string is\n";
    cout << myout;

    return 0;
}
