#include <iostream>
#include <stdlib.h>
#include <malloc.h>
#include <string>
#include <dshow.h>

using namespace std;

//Checks is s2 is a rotation of s1
//Print out result of test
int main() {
    string s1,s2;
    bool result;
    cin >> s1 >> s2;
    string cat;
    cat = s1+s1;
    void* ptr;
    ptr = strstr(cat.c_str(),s2.c_str());
    if (ptr == nullptr)
        result = false;
    else
        result = true;
    cout << result << endl;
    return 0;
}