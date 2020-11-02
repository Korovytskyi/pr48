// 4.8.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>;

using namespace std;

int main()
{
    char a;
    int x, y, c;
    int q, w, e, r;
    cout << "1";cin >> x;
    cout << "2";  cin >> y;
    cout << "";cin >> a;
    if (a = '+')
    {
        q = x + y;
        cout << "" << q << endl;
    }
    else if (a = '-')
    {
        w = x - y;
        cout << "" << w << endl;
    }
    else if (a = '*')
    {
        e = x * y;
        cout << "" << e << endl;
    }
    else if
        (a = '/')
    {
        r = x / y;
        cout << "" << r << endl;
    }

    return 0;
}