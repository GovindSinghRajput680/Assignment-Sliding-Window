#include<iostream>
#include<vector>
using namespace std;
//Q 2 -> LEETCODE - 2302
long long countSubarrays(vector<int>& nums, long long k) {int n = nums.size();
        if(k == 1) return 0;
        long long count=0,i = 0,j =0,p = 0;
        while(j<n){p+=nums[j];
            long long score = p*(j-i+1);
            while(score>=k){
                count+=(j-i);
                p-=nums[i];
                i++;
                score = p*(j-i+1);
            }
            j++;
        }
        while(i<n){ 
            count+=(j-i);
            i++;
               
        }
        return count;}
int main(){vector<int> v = {2,2,2,2,5,5,5,8};
            cout<<countSubarrays(v,5);




}