#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (key < a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}