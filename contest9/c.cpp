#include <iostream>
#include <vector>
using namespace std;

int maxEqualPartitions(vector<int>& arr) {
    int n = arr.size();
    int total_sum = 0;

    for (int num : arr) {
        total_sum += num;
    }

    vector<int> prefix_sum(n, 0);
    prefix_sum[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }

    int max_partitions = 0;

    for (int i = 0; i < n; ++i) {
        int new_sum1 = total_sum - arr[i];
        int current_partitions = 0;
        int new_sum2=total_sum;

        for (int j = 0; j < n - 1; ++j) {
            int left_sum = prefix_sum[j];
            if (j >= i) {
                left_sum -= arr[i];
            }
            int right_sum1 = new_sum1 - left_sum;
            int right_sum2=new_sum2-left_sum;

            if (left_sum == right_sum1) {
                current_partitions++;
            }
            else if(left_sum==right_sum2)
            {
                current_partitions++;
            }
        }

        max_partitions = max(max_partitions, current_partitions);
    }

    return max_partitions;
}

int main() {
    vector<int> arr = { -1,5,0,0,5,0};
    cout << "Max equal partitions: " << maxEqualPartitions(arr) << endl;
    return 0;
}
