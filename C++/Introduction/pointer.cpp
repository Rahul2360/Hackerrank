#include <iostream>
#include <math>
using namespace std;
void update(int *a,int *b) {
    // Complete this function
    *a=(*a)+(*b);
    *b=abs(((*a)-(*b))-(*b));
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    cin >> a >> b;
    update(pa, pb);
    cout << a << b;

    return 0;
}
