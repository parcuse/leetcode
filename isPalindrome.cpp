    bool isPalindrome(int x) {
        vector<int> a;
        if (x == 0){
            return true;
        }
        if (x % 10 == 0 || x < 0){
            return false;
        }
        while(x){
            a.push_back(x % 10);
            if (x / 10 == 0){
                break;
            }
            x /= 10;
        }
        vector<int> b;
        for (int i = static_cast<int>(a.size()); i > 0; i--){
            b.push_back(a[i-1]);
        }
        //cout<<a.size()<<b.size()<<endl;
        for (int i = 0; i < a.size(); i++){
            if (a[i] != b[i]){
                return false;
            }
        }
        return true;
    }

