#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
  string str1,str2;
    cin >> str1 >> str2;
    cout << str1.size() << " " << str2.size() << endl;
    cout << str1+str2 << endl;
    char s1=str1[0];
    char s2=str2[0];
    str1.erase(str1.begin());
    str2.erase(str2.begin());
    cout << s2+str1 << " " << s1+str2;
    return 0;

}

