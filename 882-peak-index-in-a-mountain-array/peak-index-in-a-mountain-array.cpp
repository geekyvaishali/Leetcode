
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int start = 0;
        int end = arr.size() - 1;

        while (start < end) {

            int mid = start + (end - start) / 2;

            if (arr[mid] < arr[mid + 1]) {
                // Peak is on the right side
                start = mid + 1;
            }
            else {
                // Peak is at mid or on the left side
                end = mid;
            }
        }

        return start;
    }
};
