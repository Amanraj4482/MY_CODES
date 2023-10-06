Here's a possible implementation of a function that rotates an array of integers to the right by k elements:

```c++
#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;

    vector<int> tmp(n);
    for (int i = 0; i < n; i++) {
        tmp[(i + k) % n] = nums[i];
    }

    nums = tmp;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 3;

    rotate(nums, k);

    for (int x : nums) {
        cout << x << \" ";
    }
    cout << endl;

    return 0;
}
``` 

Explanation:
- The function takes a vector of integers and an integer k as arguments.
- It calculates the modulus of k with the size of the vector, so that it doesn't have to perform unnecessary rotations.
- It creates a new temporary vector with the same size as the original vector.
- It loops over the elements of the original vector, and puts them in the corresponding position of the temporary vector, according to the rotation.
- Finally, it assigns the temporary vector to the original vector, effectively rotating it to the right by k elements.

Example:
- The initial vector is {1, 2, 3, 4, 5}.
- The value of k is 3.
- The expected output is {3, 4, 5, 1, 2}.