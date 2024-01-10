#include <iostream>
#include <limits>
#include <stdio.h>

using namespace std;

int main
{

	int[] nums = [0,0,1,1,1,2,2,3,3,4]; // Input array
	int[] expectedNums; // The expected answer with correct length

	int k = removeDuplicates(nums); // Calls your implementation

	assert k == expectedNums.length;
	for (int i = 0; i < k; i++) {
	    assert nums[i] == expectedNums[i];
	}

	return 0;
}

int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int m = nums.size();
        int i = 0;
        for(int j = 1; j <=m-1; j++)
        {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }}
