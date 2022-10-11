#include <iostream>
using namespace std;
#define MAX 8
int uniqueValue(int arr[MAX], int size)
{

    int ans = arr[0];

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[MAX];

    cout << "Enter the value in array" << endl;
    for (int i = 0; i < MAX; i++)
    {
        cin >> arr[i];
    }
    cout << "UNIQUE VALUE: " << uniqueValue(arr, MAX);

    return 0;
}