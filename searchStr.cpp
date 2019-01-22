    int strStr(string haystack, string needle) {
		int cursor = 0;
        int index = -1;
        while (cursor < haystack.size()){
            int flag = 1;
            for (int i = 0; i<needle.size(); i++){
                if (haystack[cursor+i] == needle[i]){
                    i = i;
                }
                else{
                    cursor = cursor + i + 1;
                    flag = 0;
                    break;
                }
            }
            if (flag){
                index = cursor;
                break;
            }
        }
        return index;
    }

