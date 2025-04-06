#include <iostream>
#include <vector>
using namespace std;

int findClosestNumber(vector <int> & nums) {
	int min = nums[0];
	for (int i=1; i<nums.size(); i++){
		/*
		if ((nums[i] < min || nums[i] < -min) && nums[i] >= 0){
			min = nums[i];
			cout << "a\n";
		}
		else if (-nums[i] < min && nums[i] < 0){
			min = nums[i];
			cout << "b\n";	
		}
		*/
		if (abs(nums[i]) < abs(min)) min = nums[i];
		if (abs(nums[i]) == abs(min) && nums[i] > 0){
			min = nums[i];
		}
	}
	return min;
}

int main(){
	vector <int> v{3,4,5,76,7,4,21,34,65,-1,1};
	cout << findClosestNumber(v) << "\n";
}
