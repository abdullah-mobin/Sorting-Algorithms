#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (size_t i = 0; i < n - 1; i++)
    {
        int min = i;
        for (size_t j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(arr[min], arr[i]);
        }
    }
}

void print(int arr[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);
    print(arr, n);
    return 0;
}