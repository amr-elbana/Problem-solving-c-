#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a[n];
  int count1, count2;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int b[n];
  for (int i = 0; i < n; i++) {
    b[i] = a[i];
  }

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      if (a[i] < 0) { // if the number is nega skip
        continue;
      } else {
        a[i] *= -1;
        count1++;
      }
    } else {
      if (a[i] > 0) { // if the number is pos skip
        continue;
      } else {
        a[i] *= -1;
        count1++;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      if (b[i] > 0) { // if the number is nega skip
        continue;
      } else {
        b[i] *= -1;
        count2++;
      }
    } else {
      if (b[i] < 0) { // if the number is pos skip
        continue;
      } else {
        b[i] *= -1;
        count2++;
      }
    }
  }
  // // copy a array to another array
  // int b[n];
  // for (int i = 0; i < n; i++) {
  //   b[i] = a[i];
  // }

  // for (int i = 0; i < n - 1; i++) {

  //   if (i == n - 1) {
  //     break;
  //   } else {
  //     if (a[i] < 0 && a[i + 1] > 0) {
  //       continue;
  //     } else if (a[i] > 0 && a[i + 1] < 0) {
  //       continue;
  //     } else {
  //       a[i + 1] *= -1;
  //       count1++;
  //     }
  //   }
  // }

  // for (int i = n; i >= 1; i--) {

  //   if (i == 1) {
  //     break;
  //   } else {
  //     if (b[i] < 0 && b[i -1] > 0) {
  //       continue;
  //     } else if (b[i] > 0 && b[i -1] < 0) {
  //       continue;
  //     } else {
  //       b[i - 1] *= -1;
  //       count2++;
  //     }
  //   }
  // }
  /*
    int T, pctr = 0, nctr = 0, needed = 0;
    cin >> T;

    needed = T / 2;

    while (T--) {
      int n;

      cin >> n;

      n > 0 && pctr++;
      n < 0 && nctr++;
    }

    if (pctr > nctr) {
      cout << needed - nctr;
    } else {

      cout << needed - pctr;
    }*/

  cout << min(count1, count2);
  return 0;
}
