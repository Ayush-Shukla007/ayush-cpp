#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int l = 0;
    int r = nums.size() - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return l;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    int ans = searchInsert(nums, target);

    cout << "Search Insert Position = " << ans << endl;

    return 0;
}