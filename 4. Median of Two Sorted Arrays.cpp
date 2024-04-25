class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums(2000); 
        int n=nums1.size()+nums2.size();
        int i=0;
        int j=0;
        int count=0;
        int ret=0;
        //cout<<"Test 1:"<<n<<endl;
        while(i<nums1.size() && j<nums2.size()){
            //cout<<"Test 1.1 i:"<<i<<" j:"<<j<<" count:"<<count<<endl;
            if(nums1[i]<nums2[j]){
                nums[count]=nums1[i];
                //cout<<"Test 1.2:"<<nums[count]<<endl;
                i++;

            }
            else{
                 nums[count]=nums2[j];
                 //cout<<"Test 1.3:"<<nums[count]<<endl;
                 j++;
            }
            count++;
        }
        //cout<<"Test 2:"<<endl;
        while(i<nums1.size()){
             nums[count]=nums1[i];
             i++;
             count++;
        }
        //cout<<"Test 3:"<<endl;
        while(j<nums2.size()){
             nums[count]=nums2[j];
             j++;
             count++;
        }
        //cout<<"count:"<<count<<endl;
        if(count%2!=0){
            return nums[count/2];
        }
        else{
            int median1 = nums[n / 2 - 1];
            int median2 = nums[n / 2];
            return (median1 + median2) / 2.0;
        }
            
    }
};