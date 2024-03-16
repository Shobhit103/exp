#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, d, x;

    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter the number of left shift operations : ";
    cin >> d;

    vector<int> arr;

    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }

    for (int i = 0; i < d; i++)
    {
        arr.push_back(arr[0]);
        arr.erase(arr.begin());
    }

    cout << "Left Rotated Array : ";
    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}