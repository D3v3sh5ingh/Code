#include <bits/stdc++.h>
using namespace std;
int lower(vector<int> &arr, int start, int end, int val)
{

    int index = end + 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == val)
        {
            index = mid;
            end = mid - 1;
        }
        else if (arr[mid] > val)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return index;
}

int upper(vector<int> &arr, int start, int end, int val)
{

    int index = start - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == val)
        {
            index = mid;
            start = mid + 1;
        }
        else if (arr[mid] > val)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return index;
}

int solve(vector<int> &arr, int i, int j)
{

    if (i > j)
        return 0;
    if (i == j)
        return arr[i];

    int ans = 0;

    for (int k = i; k <= j; k++)
    {
        int left_index = lower(arr, i, k - 1, arr[k] - 1);
        int right_index = upper(arr, k + 1, j, arr[k] + 1);
        int left_ans = solve(arr, i, left_index - 1);
        int right_ans = solve(arr, right_index + 1, j);
        int temp_ans = arr[k] + left_ans + right_ans;
        ans = max(ans, temp_ans);
    }

    return ans;
}

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    cout << solve(arr, 0, n - 1) << endl;

    return 0;
}