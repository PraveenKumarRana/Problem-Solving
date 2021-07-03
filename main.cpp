#include <iostream>
using namespace std;
int main() {
    int *ptr;
    int arr[1];
    ptr = arr;
    int n;
    cin >> n;
    int x = 0, _size = 1;
    for (int i = 1; i <= n; i++) {
        int y;
        cin >> y;
        if (x == 0) {
            ptr[0] = y;
            x++;
        } else {
            if (_size > x) {
                *(ptr + x) = y;
                x++;
            } else {
                int new_size = 2 * x;
                int n_arr[new_size];
                for (int j = 0; j < x; j++) {
                    n_arr[j] = *(ptr + j);
                }
                n_arr[x] = y;
                x++;
                ptr = n_arr;
                _size = new_size;
            }
        }
    }
    for (int i = 0; i < x; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << "\n";
}