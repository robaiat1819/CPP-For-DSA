#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int i = 0, j = strlen(s) - 1;
    int flag = 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            flag = 0;
        }
        i++;
        j--;
    }
    if (flag == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}