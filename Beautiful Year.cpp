#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool checkYear(int y) {
	bool check = true;
	
	vector<int> nums;
	while (y!=0) {
		nums.push_back(y%10);
		y /= 10;
	}
	
	sort(nums.begin(), nums.end());
	
	for (int i=0; i<nums.size(); i++)
		if (nums[i] == nums[i+1])
			check = false;
			
	return check;
}
int main() {
	int year;
	cin>>year;
	do{
		year++;
	} while (!checkYear(year));
	cout<<year;
	return 0;
}
