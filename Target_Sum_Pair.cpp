#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n;
   // cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 2) {
       // cout << "Array should have at least two elements for pairs.\n";
        return 1;  // Return a non-zero value to indicate an error.
    }

    int i, j, arr[n];
  //  cout << "Enter the elements of array: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int t;
//cout << "Enter the value of target: ";
    cin >> t;

    sort(arr, arr + n);

    bool found = false;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == t) {
                cout << arr[i] << " and " << arr[j] << endl;
                found = true;
                // Skip repeated elements to avoid duplicate pairs
                while (j < n - 1 && arr[j] == arr[j + 1]) {
                    j++;
                }
            }
        }
    }

  //  if (!found) {
    //    cout << "No pair found with the given target sum.\n";
   // }

    return 0;
}
