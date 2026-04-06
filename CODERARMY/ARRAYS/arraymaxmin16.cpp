#include <iostream>
using namespace std;
int main()
{
    int arr[] = {45, 63, 89, 23, 47, 20};
    cout << "size of array:" << sizeof(arr) << "\n";
    cout << "number of elements of array:" << sizeof(arr) / sizeof(arr[0]) << "\n";

    int ans = INT16_MAX;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        }
    }
    cout << "MINIMUM ELEMENT OF ARRAY :" << ans << "\n";

    int ans2 = INT16_MIN;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > ans2)
        {
            ans2 = arr[i];
        }
    }
    cout << "MAXIMUM ELEMENT OF ARRAY :" << ans2;

    return 0;
}