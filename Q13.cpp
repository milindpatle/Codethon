#include <iostream>
using namespace std;

int main()
{
    int n, pi = 3.14, r, l, b, s, t,area;
    cout << "Enter the value of n :" << endl;
    cin >> n;

    switch (n)
    {
    case 11:
        cout << "Enter the value  for Area: " << endl;
        cin >> r;
        area = pi + r * r;
        cout << area << endl;
        break;
    case 22:
        cout << "Enter the value  for rectanle : " << endl;
        cin >> l >> b;
        area= l * b;
        cout << area << endl;
        break;
    case 33:
        cout << "Enter the value  for square: " << endl;
        cin >> s;
        area = s * s;
        cout << area << endl;
        break;
    case 44:
        cout << "Enter the value  for triangle " << endl;
        cin >> l >> b;
        area = 1 / 2 * l * b;
        cout << area << endl;
        break;
    }
}