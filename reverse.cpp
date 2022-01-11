#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char s[10];
    cin >> s;
    char r[10];

    int i, j = 0;
    for (i = strlen(s)-1; i > -1; i--)
    {
        r[j++] = s[i];
    }

    cout << r;
    return 0;
}