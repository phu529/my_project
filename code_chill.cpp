#include <iostream>
using namespace std;
void maxSlidingWindow(int a[], int n, int k, int res[]) {
    int index = 0;
    for (int i = 0; i <= n-k; i++) {
        int max = a[i];
        for (int j = i; j < i+k;j++) {
            if (max < a[j]) {
                max = a[j];
            }

        }
        res[index++] = max;
    }
    for (int i = 0; i < n-k+1; i++) {
        cout << res[i];
    }
}
int isPrime(int n) {
    if (n <= 1)return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 2)return false;
    }
    return true;
}
int arrayPrime(int a[][5], int col, int row) {
    int max = 0, res = -1;
    for (int i = 0; i < row; i++) {
        int index = 0;
        for (int j = 0; j < col; j++) {
            if (isPrime(a[i][j])) {
                index++;
            }
        }
        if (index > max) {
            res = i;
            max = index;
        }
    }
    return res;
}
int tongso(int n) {
    int sum = 0;
    while (n > 0) {
        int index = n;
        index %= 10;
        sum += index;
        n /= 10;
    }
    return sum;
}
int player(int a[], int n) {
    int pos = tongso(a[n-1]);
    int res = 0;
    for (int i = 0; i < n - 1; i++) {
        if (pos > tongso(a[i])) {
            res++;
        }
        else res--;
    }
    return res;

}
int sumDigitInString(char s[]) {
    int sum = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            sum = s[i] - '0';
        }
    }
    return sum;
}
int minPrime(int n) {
    int num = pow(10, n - 1);
    for (int i = num;; i++) {
        if (isPrime(i)) {
            return i;
        }
    }
}
int nearPrime(int n) {
    int res = n, pos = n;
    if (isPrime(n)) {
        return n;
    }

    while (true) {
        
        
            res++;
            pos--;
            if (isPrime(res))return res;
            else if (isPrime(pos)&&pos>=2)return pos;
            continue;
      
    }
}
int digitbinary(int n) {
    int sum = 0, base = 1;
    while (n>0) {
        int bit = n % 2;
        sum += bit * base;
        base *= 10;
        n /= 2;
        
    }
    return sum;
}
int digitdec(int n) {
    int sum = 0;
    for (int i = 0;; i++) {
        if (n <= 0)return sum;
        int bit = n;
        bit %= 10;
        sum += bit*pow(2, i);
        n /= 10;
    }
    
}
bool evenNumber(int n) {
    if (n % 2 != 0)return false;
    return true;
}
void sortArrayOddEven(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (evenNumber(a[i])) {
            int max = a[i], pos = i;
            for (int j = i + 1; j < n; j++) {
                if (a[j] > max && evenNumber(a[j])) {
                    max = a[j];
                    pos = j;
                }
            }
            swap(a[i], a[pos]);
        }
        else {
            int min = a[i], res = i;
            for (int j = i + 1; j < n; j++) {
                if (a[j] < min && !evenNumber(a[j])) {
                    min = a[j];
                    res = j;
                }
            }
            swap(a[i], a[res]);
        }
    }
}
int main()
{
    int a[] = { 5, 2, 7, 4, 3, 6 };
    sortArrayOddEven(a, 6);
    for (int i = 0; i < 6; i++) {
        cout << a[i] << " ";
    }
}

