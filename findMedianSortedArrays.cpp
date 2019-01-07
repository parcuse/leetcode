    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        size_t length1 = nums1.size();
        int cursor1 = 0;
        size_t length2 = nums2.size();
        int cursor2 = 0;
        if (!length1){
            nums3 = nums2;
        }
        else if (!length2){
            nums3 = nums1;
        }
        else{
        while (cursor2 < length2 || cursor1 < length1){
            if (nums1[cursor1]<nums2[cursor2]){
                nums3.push_back(nums1[cursor1]);
                cursor1++;
                if (cursor1 == length1){
                    for (int i = cursor2; i<length2; i++){
                        nums3.push_back(nums2[i]);
                    }
                    break;
                }
            }
            else{
                nums3.push_back(nums2[cursor2]);
                cursor2++;
                if (cursor2 == length2){
                    for (int i = cursor1; i<length1; i++){
                        nums3.push_back(nums1[i]);
                    }
                    break;
                }
            }
        }
        }
//for (int i =0;i<nums3.size();i++){
//           cout<<nums3[i]<<endl;
//        }
        size_t length3 = nums3.size();
        cout<<length3<<":length3"<<endl;
        if (length3 % 2 == 0){
            return (double) (nums3[length3/2] + nums3[length3/2 - 1]) / 2.0;
        }
        else{
            return nums3[length3/2];
        }
    }

