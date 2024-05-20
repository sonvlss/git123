#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Nhap vao so phan tu cua day: ";
   cin >> n;

   int a[n];
   cout << "Nhap vao day so: ";
   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }

   cout << "Cac so chia het cho 3 va chan trong day la: ";
   for (int i = 0; i < n; i++) {
      if (a[i] % 3 == 0 && a[i] % 2 == 0) {
         cout << a[i] << " ";
      }
   }

   return 0;
}
