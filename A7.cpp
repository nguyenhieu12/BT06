#include <iostream>
#include <algorithm>

using namespace std;

void permutation(string s, int lo, int hi)
{
    if (lo == hi)
        cout << s << endl;
    else
    {
        for (int i = lo; i <= hi; i++)
        {
            swap(s[lo], s[i]);
            permutation(s, lo + 1, hi);
        }
    }
}

int main()
{
    string s;
    cin >> s;
    int a = 0, b = s.length() - 1;
    permutation(s, a , b);
    return 0;
}
