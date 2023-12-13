#include<iostream>
#include<vector>
using namespace std;
//Q1->LEETCODE 1343
 int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int t = threshold*k;
        
        int n = arr.size(),ps = 0,count = 0;
        for(int i = 0;i<k;i++) ps+=arr[i];
        if(ps>=t) count++;
        int i = 1,j = k;
        while(j<n){
           ps+=(arr[j]-arr[i-1]);
           if(ps>=t) count++;
           j++,i++;
        }
    return count;
    }
int main(){vector<int> v = {2,2,2,2,5,5,5,8};
 cout<<numOfSubarrays(v, 3,4);






}