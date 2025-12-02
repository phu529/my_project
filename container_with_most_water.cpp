#include <iostream>
using namespace std;
int container(int arr[], int n) {
    int left = 0, right = n-1, count = 0, max = 0;
    while (true) {
         
        count = min(arr[left], arr[right]) * (right - left);
        if (max < count) {
            max = count;
        }
        if (arr[left] < arr[right]) {
            left++;
        }
        else if (arr[left] > arr[right]) {
            right--;
        }
        else if(arr[left]==arr[right]) {
            left++;
        }
        if (left == right) return max;
    }
}
int main()
{
    int arr[100]; int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << container(arr, n);
}

