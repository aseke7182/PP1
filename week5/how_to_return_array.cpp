#include <iostream>
#include <cmath>

using namespace std;

int* foo(int a[], int b[], int size) {
  int* arr = new int[size];

  for (int i = 0; i < size; i++) {
    arr[i] = abs(a[i]-b[i]);
  }
  
  return arr;
}

int main() {
  int n;
  cin>>n;
  int a1[n];
  int a2[n];
  for (int i = 0; i < n; i++) {
    cin>>a1[i];
  }
  for (int i = 0; i < n; i++) {
    cin>>a2[i];
  }
  int* bar;
  bar = foo(a1,a2, n);
  for (int i = 0; i < n; i++) {
    cout<< bar[i] << " ";
  }
  return 0;
}