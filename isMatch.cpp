    bool isMatch(string s, string p) {
        int i = 0;
        int j = 0;
        while(i < s.size() || j < p.size()){
            if (p[j] == '.'){
                if (p[j+1] == '*'){
                    if (p[j+2] == 0){
                        return true;
                    }
                    while(s[i] != p[j+2]){
                        i++;
                        if (i == s.size()){
                            return false;
                        }
                    }
                    j += 2;
                }
                i++;
                j++;
                continue;
            }
            if (s[i] == p[j]){
                i++;
                j++;
                continue;
            }
            if (p[j+1] == '*'){
                i++;
                j+=2;
                continue;
            }
            if (p[j] == '*'){
                if (s[i] == p[j-1] || p[j-1] == '.'){
                    i++;
                    continue;
                }
                else{
                    j++;
                    continue;
                }
            }
            return false;
        }
        return true;
    }

