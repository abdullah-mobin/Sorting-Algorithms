#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int size)
{

    for (size_t i = 0; i < size; ++i)
    {
        for (size_t j = 0; j < size - i -1; ++j) 
        {
            if (arr[j] > arr[j + 1])
            {
                int tem = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tem;
            }
        }
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

    cout << "Before sorting : ";
    print(arr, n);

    bubbleSort(arr, n);
    cout << "After sorting : ";
    print(arr, n);

    return 0;
}