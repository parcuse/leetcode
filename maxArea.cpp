    inline int min(int a, int b){
        return a>b?b:a;
    }
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = static_cast<int>(height.size()) - 1;
        int max_data = (j - i) * min(height[i], height[j]);
        while(i<j){
            if (height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }
            if ((j - i) * min(height[i], height[j]) > max_data){
                max_data =(j - i) * min(height[i], height[j]);
            }
        }
        return max_data;
    }

