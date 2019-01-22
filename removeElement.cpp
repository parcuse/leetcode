    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int length = 0;
        while(i<nums.size()){
            if (nums[i] == val){
                nums.erase(nums.begin() + i);
            }
            else{
                length++;
                i++;
            }
        }
        return length;
    }

