#include <iostream>
#include <cstdio>
using namespace std;
int max_of_four(int a, int b, int c, int d);
int max_of_four(int a, int b, int c, int d)
{
    int m;
    m=(a>b && a>c && a>d ) ? a: ((b>c && b>d) ? b : ((c>d)?c : d));
    return m;
    return 0;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
