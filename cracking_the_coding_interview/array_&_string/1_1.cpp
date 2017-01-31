// Implement an algorithm to determine if a string has all unique characters. What if you can not use additional data structures?

#include <iostream>
#include <map>
#include <string>
using namespace std;



// This method will use extra buffer.
// space complexity O(n)
// time complexity O(n) -> neglecting access of map elements

bool has_unique_method1(string mystring) {
    int len = mystring.length();
    if (len = 0)
        return false;
    map<char, int> mymap;
    //int a[256] = {0};
    for (int i=0; i<len; i++) {
        mymap[mystring[i]]++;
    }

    // a[mystring[i]-97]++

    //for (int i=0; i<mymap.size(); i++) {
      //  if (mymap[i]>1)
        //    return false;
    //}

    map<char, int>::iterator itr = mymap.begin();
/*     while (itr!=mymap.end()){
 *         cout << int(itr->first) << "->" << itr->second << "\n";
 *         if (int(itr->first)== 32)
 *             //cout << "space is there\n";
 *         itr++;
 *     }
 */

    while (itr != mymap.end()) {

        if (((int(itr->first) == 32) && itr->second > 1) || itr->second > 1)
            return false;

            //return false;
        itr++;
    }

    return true;
}

// This method2 will not use extra buffer
// it will just compare all char
// time complexity O(n^2)


bool has_unique_method2(string mystring) {
    int len = mystring.length();
    for (int i=0; i<len-1; i++){
        for (int j=1; j<len; j++) {
            if (mystring[i]==mystring[j])
                return false;
        }
    }
    return true;

}

int main() {

    string mystring;
    int t;
    cout << "enter no of test case\n";
    cin >> t;

    while (t--) {
        cin.ignore();   // ignore the input number
        cout << "enter a string\n";

        getline(cin, mystring);

        if (has_unique_method1(mystring))
            cout << "has unique char\n";
        else
            cout << "doesn't have unique char\n";


    }
    return 0;
}
