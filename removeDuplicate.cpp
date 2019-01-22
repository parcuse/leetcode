    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 0){
            return 0;
        }

        int cursor = nums[0];
        int length = 1;
        int i = 1;
        while (i<nums.size()){
            if (nums[i] > cursor){
                cursor = nums[i];
                length++;
                i++;
            }
            else{
                nums.erase(nums.begin() + i);
            }

        }
        return length;
    }

