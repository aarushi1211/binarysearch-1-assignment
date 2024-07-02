#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int>& nums) {
int low = 1, high = nums.size() - 1, cnt;
while(low <= high){
int mid = low + (high - low) / 2;
int count = 0;
for(int n : nums)
{
if(n <= mid)
++count;
}
if(count <= mid)
low = mid + 1;
else
high = mid - 1;
}
return low;
}
int main(){
vector<int>a;
for(int i=0;i<a.size();i++){
    cin>>a[i];
}
    findDuplicate(a);
}