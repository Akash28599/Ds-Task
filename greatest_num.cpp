#include <bits/stdc++.h>
using namespace std;
int maximumProduct(vector<int> list)
{
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i] <= min1)
        {
            min2 = min1;
            min1 = list[i];
        }
        else if (list[i] <= min2)
        {
            min2 = list[i];
        }
        if (list[i] >= max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = list[i];
        }
        else if (list[i] >= max2)
        {
            max3 = max2;
            max2 = list[i];
        }
        else if (list[i] >= max3)
        {
            max3 = list[i];
        }
    }
    return max(min1 * min2 * max1, max1 * max2 * max3);
}
int main()
{
    vector<int> list = {-1, 2, 3, 4, 5, -6};
    cout << maximumProduct(list) << endl;
    return 0;
}