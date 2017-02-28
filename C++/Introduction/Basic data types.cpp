#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a;long int b;long long int c;char d;float e;double f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << a << endl << b << endl << c << endl << d << endl ;
    std::cout << std::fixed;
    std::cout << std::setprecision(3) << e << endl;
    std::cout << std::setprecision(9) << f << endl;
    return 0;
}
