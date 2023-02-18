// BRUTE FORCE - LOOP THROUGH EVERY SUBARRAY
#include <bits/stdc++.h>
using namespace std;

void maxSubArray(vector<int> &nums)
{
    int sum;
    int res = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum = sum + nums[j];
            res = max(res, sum);
            cout << nums[j] << "  ";
        }
        cout << " =" << sum;
        cout << endl;
    }
    cout << "Maximum contiguous sum = " << res;
}

int main()
{
    vector<int> vec;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter element " << i << ": ";
        cin >> x;
        vec.push_back(x);
    }

    cout << "The elements in the vector are: ";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    maxSubArray(vec);
    return 0;
}
