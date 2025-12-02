#include <iostream>
using namespace std;
void bubble_sort(int arr[], int n) {
    for (int i =0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1])swap(arr[j], arr[j+1]);
        }
    }
    
}
void selection_sort(int arr[], int n) {
    
    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (arr[min] > arr[j])min = j;
        }
        if(min!=i)
        swap(arr[i], arr[min]);
    }
}

int main()
{
   
}
