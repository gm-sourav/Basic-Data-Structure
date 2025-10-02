#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // cout << v.size();
    int n;
    cin >> n;
    // vector<int> v(n);
    // cout << v.size();

    int a[5] = {1,2,3,4,5};
    vector<int> v(a,a+5);
    vector<int> v(n,4);
    vector<int> v2(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    


    return 0;
}