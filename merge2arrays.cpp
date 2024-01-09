#include <iostream>
#include <limits>
#include <stdio.h>

using namespace std;

int main
{

	int nums1[] = {1,2,34,5,7};
	int nums2[] = {3,2,4,5,2};
	
	int m = sizeof(nums1)/sizeof(nums1[0]);
	int n = sizeof(nums2)/sizeof(nums2[0]);

	merge(nums1,m,nums2,n);

	return 0;
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m;
        for (int j = 0; j<n; j++)
        {
            nums1[i] = nums2[j];
            i++;
        }
        
        sort(nums1.begin(), nums1.end());
    }
