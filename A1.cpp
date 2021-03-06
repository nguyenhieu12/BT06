#include <iostream>

using namespace std;

void testArray(int a[])
{
    cout << a;
}

int main()
{
    int a[5] = {0};
    cout << a << endl;
    testArray(a);
    return 0;
}
