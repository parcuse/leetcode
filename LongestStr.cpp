    int lengthOfLongestSubstring(string s) {
        int cursor1 = 0;
        string max_data = "";
        size_t max = 0;
        size_t length = s.size();
        for (int cursor2 = 0;cursor2 < length; cursor2++){
            cout<<cursor2<<s[cursor2]<<endl;
            if (max_data.find(s[cursor2]) == string::npos){
                string tmp_max_data = s.substr(cursor1, cursor2+1);
                max_data = tmp_max_data.size()>max?tmp_max_data:max_data;
                max = tmp_max_data.size()>max?tmp_max_data.size():max;
                cout<<max_data<<"============="<<endl;
            }
            else{
                cursor1 = (int) max_data.find(s[cursor2]) + 1 ;
            }
        }
        cout<<max_data<<endl;
        return (int) max;
    }

