#include <iostream>
#include <string>

bool isUnique(std::string x) {
    //ascii
    int charEnc = 128;
    //if using unicode
    //int charEnc = 256;


    if (x.length() > charEnc) return false;
    bool* storage = new bool[charEnc];
    for (int i = 0; i < x.length(); i++) {
        if (storage[x[i]] != 1) {
            storage[x[i]] = 1;
        }
        else return false;
    }
    return true;
}

int main() {
    std::string myStr = "Hi Pab";
    std::cout << isUnique(myStr);
}