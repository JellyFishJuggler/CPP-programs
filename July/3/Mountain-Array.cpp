/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int BinarySearch(int k, MountainArray &nums, int l, int r, bool Ascending) {
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums.get(mid) == k) {
                return mid;
            }
            if (Ascending) {
                if (nums.get(mid) < k) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            } else {
                if (nums.get(mid) > k) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }
        return -1;
    }

    int peakElement(MountainArray &mountainArr) {
        int l = 0;
        int n = mountainArr.length();
        int r = n - 1;

        while (l < r) {
            int mid = l + (r - l) / 2;
            if (mountainArr.get(mid) < mountainArr.get(mid + 1)) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        return l;  // or return r; both point to the peak index
    }

    int findInMountainArray(int target, MountainArray &mountainArr) {
        int peak = peakElement(mountainArr);
        int n = mountainArr.length();

        // Check if target is at the peak
        if (mountainArr.get(peak) == target) {
            return peak;
        }

        // Try to find the target in the increasing part
        int left = BinarySearch(target, mountainArr, 0, peak - 1, true);
        if (left != -1) {
            return left;
        }

        // Try to find the target in the decreasing part
        return BinarySearch(target, mountainArr, peak + 1, n - 1, false);
    }
};
