#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    int x;

    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    cout << "Enter size of three stacks : ";
    cin >> n1 >> n2 >> n3;

    for (int i = 0; i < n1; i++)
    {
        cin >> x;
        v1.push_back(x);
    }

    for (int i = 0; i < n2; i++)
    {
        cin >> x;
        v2.push_back(x);
    }

    for (int i = 0; i < n3; i++)
    {
        cin >> x;
        v3.push_back(x);
    }

    reverse(v1.begin(), v1.end());
    reverse(v2.begin(), v2.end());
    reverse(v3.begin(), v3.end());

    int sum = 0;
    for (int i = 0; i < n1; i++)
    {
        sum += v1[i];
        v1[i] = sum;
    }

    sum = 0;
    for (int i = 0; i < n2; i++)
    {
        sum += v2[i];
        v2[i] = sum;
    }

    sum = 0;
    for (int i = 0; i < n3; i++)
    {
        sum += v3[i];
        v3[i] = sum;
    }

    x = ((n1 > n2)   ? ((n2 > n3) ? n1 : (n1 > n3) ? n1
                                                   : n3)
         : (n2 < n3) ? n3
                     : n2);

    reverse(v1.begin(), v1.end());
    reverse(v2.begin(), v2.end());
    reverse(v3.begin(), v3.end());

    if (x == v1.size())
    {
        for (auto j : v1)
        {
            auto it = find(v2.begin(), v2.end(), j);
            if (it != v2.end())
            {
                it = find(v3.begin(), v3.end(), j);
                if (it != v3.end())
                {
                    cout << *it;
                }
            }
        }
    }
    return 0;
}