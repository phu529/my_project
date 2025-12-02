#include <iostream>
using namespace std;
int local_maximum(int arr[][10], int row, int col) {
    int count = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            bool check = true;
            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    if (dx == 0 && dy == 0)continue;
                    int x = i + dx;
                    int y = j + dy; 
                    if (x >= 0 && x < row && y >= 0 && y < col) {
                        if (arr[i][j] < arr[x][y]) { check = false; }
                    }
                }
            }
            if (check)count++;
        }
    }
    return count;
}

int main()
{
    
}

