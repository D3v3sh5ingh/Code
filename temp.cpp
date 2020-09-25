#include <bits/stdc++.h>
#include <sstream>
#include <unordered_set>
using namespace std;

void remDuplicateWord(string str)
{
    stringstream ss(str);

    unordered_set<string> tab;

    do
    {
        string word;
        ss >> word;

        // check if current word already exist,if not then insert
        while (tab.find(word) == tab.end())
        {
            cout << word << " ";
            tab.insert(word);
        }

    } while (ss);
}
using namespace std;
int main()
{
    vector<pair<int, pair<int, int>>> x;
    x.push_back(make_pair(1, make_pair(2, 3)));

    x.push_back({4, {5, 6}});
    for (auto i : x)
    {
        cout << i.first << " " << i.second.first << " " << i.second.second << endl;
    }

    return 0;
}