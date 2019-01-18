    string longestCommonPrefix(vector<string>& strs) {
        int i = 0;
        if (strs.size() == 0){
            return "";
        }
        if (strs.size() == 1){
            return strs[0];
        }
    
        string fir = strs[0];
        string t;
        int flag = 1;
        for (int i = 0; i<strs.size(); i++){
            cout<<strs[i]<<endl;
        }
        while(true){
            for (int j = 1; j<strs.size(); j++){
                cout<<i<<j<<endl;
                if(strs[j][i] != fir[i] || strs[j][i] == 0){
                    flag = 0;
                    break;
                }
            }
            if (flag){
            t.push_back(fir[i]);
            i++;
            }
            else{
                cout<<t<<endl;
                cout<<"test return"<<endl;
                return t;
            }
        }
    }

