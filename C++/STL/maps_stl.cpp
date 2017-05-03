#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    map<string,int>m;
    int num;
    cin >> num;
    for(int i=0;i<num;i++){
        int q;
        string str;
        cin >> q >> str;
        if (q == 1){
            int mark;
            cin >> mark;
            m[str] += mark;
        }
        else if (q == 2){
            m[str] = 0;
        }
        else{
            cout << m[str] << '\n';
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
