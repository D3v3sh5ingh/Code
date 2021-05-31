#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int k;
    cin >> k;
    if (k == 1)
    {
        cout << n << endl;
        cout << "bhencho";
    }
    else
    {
        for (int i = 0; i <= n - k; i++)
        {
            bool y = true;
            for (int j = i; j < i + k - 1; j++)
            {
                if (v[j + 1] <= v[j])
                {
                    y = false;
                    break;
                }
            }
            if (y)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
