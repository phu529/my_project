#include <iostream>
using namespace std;
void deletenumber(int a[], int n, int k) {
    if (k<=0||k>n) return;
        for (int j = k; j < n-1; j++) {
            a[j] = a[j + 1];
        }
  
    n--;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void addNumber(int a[], int n, int pos, int val) {
    
    for (int i = pos+1; i < n; i++) {
        a[i+1] = a[i];
    }
    a[pos] = val;
    n++;
    for (int i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }
}
int gcd(int a, int b) {
    if (b == 0)return a;
    return gcd(b, a % b);
}
int min(int a, int b) {
    if (a < b)return a;
    else return b;
}
void printNotCommonDivisors(int a, int b) {
    for (int i = 2; i <= min(a, b); i++) {
        if (!(a % i == 0 && b % i == 0)) {
            cout << i << " ";
        }

    }
}

int maxNumber(int a[],int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (max < a[i])max = a[i];
    }
    return max;
}
int secondMax(int a[], int n) {
    int max = maxNumber(a, n);
    int pos = -1e9;
    for (int i = 1; i < n; i++) {
        if (a[i]<max && a[i]>pos) {
            pos = a[i];
        }
    }
    return pos;
}
void fibon(int n) {
    if (n <= 0)return;
    int f0 = 0;
    int f1 = 1;
    int f = 0;
    cout << f0 << " " << f1;
    for (int i = 2; i < n; i++) {
        f = f1 + f0;
        f0 = f1; f1 = f;
        cout << f << " ";
    }
}
int lcm(int a, int b) {
    int num = (a * b) / gcd(a, b);
    return num;
}
int reversedNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        int res = n;
        res %= 10;
        reversed = reversed * 10 + res;
        n /= 10;

    }
    return reversed;
}
bool palindromeNumber(int a) {
    if (reversedNumber(a) == a)return true;
    return false;
   
}

void reversedArray(int a[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int maxFrequency(int a[], int n) {
    int maxcount = 0;
    for (int i = 0; i < n; i++) {
        bool check = true;
        for (int j = 0; j < i; j++) {
            if (a[j] == a[i]) check = false;
        }
        if (check == true) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (a[j] == a[i])count++;
            }
            if (maxcount < count)maxcount = count;
        }
    }
    return maxcount;
}
 void twoSum(int a[], int n,int taget) {
    for (int i = 0; i < n; i++) {
        
        for (int j = i + 1; j < n; j++) {
            int sum = a[i] + a[j];
            if (sum == taget) {
                cout << i << " " << j;
                return;
            }
        }
    }

}
 void twosumSort(int a[], int n,int taget) {
     int r = n - 1, l = 0;
     while (l < r) {
         int sum = a[l] + a[r];
         if (sum > taget) r--;
         else if (sum < taget)l++;
         else { cout << l << " " << r; return; }
     }
 }

 void removeDupilcates(int a[], int &n) {
     for (int i = 0; i < n; i++) {
         bool check = true;
         for (int j = 0; j < i; j++) {
             if (a[i] == a[j])check = false;
         }
         if (check) {
             for (int j = i + 1; j < n; j++) {
                 if (a[i] == a[j]) {
                     for (int k = j ; k < n-1; k++) {
                         a[k] = a[k + 1];
                     }
                     n--; j--;
                 }
                
             }

            
         }
     }
 }
int kadaneNum(int a[], int n) {
     int sum = a[0];
     int maxsum = a[0];
     for (int i = 1; i < n; i++) {
         sum = max(a[i], sum + a[i]);
         maxsum = max(maxsum, sum);
     }
     return maxsum;
 }

int main()
{
   
}
