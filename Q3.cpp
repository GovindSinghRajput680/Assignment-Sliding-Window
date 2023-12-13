#include<iostream>
#include<vector>
using namespace std;
//Q 3 -> LEETCODE - 1248
int numberOfSubarrays(vector<int>& nums, int k) {int n = nums.size();
        int i =0,j = 0,temp = 0,count = 0;
        while(j<n){
            if(temp == k && nums[j]%2 != 0){
                int fo = i,lo= j-1;
                while(nums[fo]%2 == 0 ) fo++;
                while(nums[lo]%2 == 0 ) lo--;
                count+=((j-lo)*(fo-i+1));
                temp--,i= fo+1;
            }
         if(nums[j]%2 != 0) temp++;
            j++;
        }
    if(temp == k && i<n){
                int fo = i,lo= j-1;
                while(nums[fo]%2 == 0 ) fo++;
                while(nums[lo]%2 == 0 ) lo--;
                count+=((j-lo)*(fo-i+1));
                temp--,i = fo+1;
            }



    return count;
    }
int main(){vector<int> v= {1,1,2,1,1};
            int k = 3;
            cout<<numberOfSubarrays(v,k);



}