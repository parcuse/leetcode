    void sort(vector<int>& nums)
    {
        int temp = 0;
        int len = nums.size();
        for(int i=0; i<len; i++)
        {
            for(int j=i+1; j<len; j++)
            {
                if(nums[i] > nums[j])
                {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
 
                }
            }
        }
    }
    vector<vector<int> > threeSum(vector<int>& nums)
    {
        int len = nums.size()/3 ;
        vector <int> vi(3);
        vector <vector<int> > arry;
        sort(nums);
        int right;
        int mid;
        for(int left=0; (left<nums.size()&&nums[left]<=0); left++)
        {
            mid = left+1;
            right = nums.size()-1;
            int tem = 0 - nums[left];
            if(left > 0 && nums[left]==nums[left-1])
            {
                continue;
            }
            while(mid < right)
            {
                if(nums[mid] + nums[right] == tem)
                {
                    int m = nums[mid];
                    int r = nums[right];
                    vi[0] = nums[left];
                    vi[1] = nums[mid];
                    vi[2] = nums[right];
                    arry.push_back(vi);
                    while((mid < right) && (nums[++mid]==m))
                    {
                        continue;
                    }
                    while((mid < right) && (nums[--right]==r))
                    {
                        continue;
                    }
                }
                else if(nums[mid] + nums[right] > tem)
                {
                    right--;
                }
                else{
                    mid++;
                }
            }
        }
        return arry;
    }

