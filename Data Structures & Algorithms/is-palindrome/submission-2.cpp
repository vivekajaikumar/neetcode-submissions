class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
        for(int i = 0 ; i<s.size() ; i++) {
            if(isalnum(s[i])) {
                v.push_back(tolower(s[i]));
            }
        }

        int size = v.size()/2;


        if (v.empty()) return true;
        char* f = &v[0];
        char* l = &v[v.size()-1];

        while(size > 0 ) {
            if( *f != *l ) {
                return false;

            }
            else {
                f++;
                l--;
                size--;
            }
        }
        return true;


        
        
    }
};
