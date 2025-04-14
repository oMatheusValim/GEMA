#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> arr;
multiset<int> minHalf;
multiset<int> maxHalf;

void adding(int value)
{
    int currentMedian = *minHalf.rbegin();
    if (currentMedian < value)
    {
        maxHalf.insert(value);
        // balance
        if (maxHalf.size() > k / 2)
        {
            minHalf.insert(*maxHalf.begin());
            maxHalf.erase(maxHalf.find(*maxHalf.begin()));
        }
    }
    else
    {
        minHalf.insert(value);
        // balance
        if (minHalf.size() > (k + 1) / 2)
        {
            maxHalf.insert(*minHalf.rbegin());
            minHalf.erase(minHalf.find(*minHalf.rbegin()));
        }
    }
}

void removing(int value)
{
    if (maxHalf.find(value) != maxHalf.end())
        maxHalf.erase(maxHalf.find(value));
    else
        minHalf.erase(minHalf.find(value));

    if (minHalf.empty())
    {
        minHalf.insert(*maxHalf.begin());
        maxHalf.erase(maxHalf.find(*maxHalf.begin()));
    }
}

int main()
{
    cin >> n >> k;
    int i = 0;
    while (i < n)
    {
        int input;
        cin >> input;
        arr.push_back(input);
        i++;
    }

    minHalf.insert(arr[0]);
    for (int i = 1; i < k; i++)
        adding(arr[i]);

    cout << *minHalf.rbegin() << " ";

    for (int i = k; i < n; i++) {
        if (k == 1){
            adding(arr[i]);
            removing(arr[i - k]);
        } else {
            removing(arr[i - k]);
            adding(arr[i]);
        }
        cout << *minHalf.rbegin() << " ";
    }
}