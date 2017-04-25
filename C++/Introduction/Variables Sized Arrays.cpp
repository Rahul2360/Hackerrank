#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,q;
    cin >> n >> q;
    vector<vector <int> >v(n);
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        v[i].resize(num);
        for(int j=0;j<num;j++)
            cin >> v[i][j];
    }
    for(int i=0;i<q;i++){
        int a,b;
        cin >> a >> b;
        cout << v[a][b] << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
