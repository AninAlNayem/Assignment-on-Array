#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums, int target) {

        map<int,int>mp;

        for(int i=0;i<nums.size();i++){
            int a=target-nums[i]; // nums[i]+a=target
            if(mp.count(a)){ // checking if 'a' is present in the map.

                printf("%d %d\n",i,mp[a]);
                break;
            }
            else mp[nums[i]]=i; // otherwise put the index(as a value) at nums[i](as key)
        }
}

int main() {
	vector<int>nums;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
       int a;scanf("%d",&a);
       nums.push_back(a);
	}

	int target;scanf("%d",&target);
  solve(nums,target);

return 0;
}
