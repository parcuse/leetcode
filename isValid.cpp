    bool isMatch(char b, char a){
        if (b == ']'){
            return a == '['?true:false;
        }
        if (b == ')'){
            return a == '('?true:false;
        }
        if (b == '}'){
            return a == '{'?true:false;
        }
        return false;
    }
    
    bool isValid(string s) {
        if(!s.size()){
            return true;
        }
        string tmp;
        tmp.push_back(s[0]);
        for(int i = 1;i<s.size();i++){
            if(isMatch(s[i], tmp.back())){
                tmp.pop_back();
            }
            else{
                tmp.push_back(s[i]);
            }
        }
        cout<<tmp<<endl;
        return !static_cast<bool>(tmp.size());
    }

