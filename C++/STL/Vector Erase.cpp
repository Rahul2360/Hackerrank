#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int>v;
    int n,num;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> num;
        v.push_back(num);
    }
    int numb,a,b;
    cin >> numb >> a >> b;
    v.erase(v.begin()+numb-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout << v.size() << endl;
    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
    return 0;
}
