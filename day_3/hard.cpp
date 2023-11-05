class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector <int>merge;
        double ans=0;
        int index;
        int i=0,j=0;
        while (i<n && j<m){
            if (nums1[i]<=nums2[j]){
                merge.push_back(nums1[i]);
                i++;
            }
            else {
                merge.push_back(nums2[j]);
                j++;
            }
        }
        while (i<n){
            merge.push_back(nums1[i]);
            i++;
        }
        while (j<m){
            merge.push_back(nums2[j]);
            j++;
        }
        int size = n+m;
        if (size&1){
            index=size/2;
            ans=merge[index];
            
        }
        else{
            index=size/2;
            ans = (merge[index]+merge[index-1])/2.0;
        }
        return ans;

    }
};