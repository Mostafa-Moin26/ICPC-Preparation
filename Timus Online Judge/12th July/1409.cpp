#include <bits/stdc++.h>

using namespace std;

int main()
{
    int harry, larry, cans;

    cin >> harry >> larry;

    cans = harry + larry - 1;

    cout << cans - harry << " " << cans - larry;

    return 0;
}