 #include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 1, 2};
    int n = 4;
    int target = 3;

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += arr[j];

            if (sum == target) {
                cout << "(" << i << ", " << j << ")\n";
            }
        }
    }
}