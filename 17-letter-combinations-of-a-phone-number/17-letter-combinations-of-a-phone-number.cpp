class Solution {
public:
    vector<string> vs {"x","x","abc" , "def" , "ghi" ,"jkl" , "mno", "pqrs" , "tuv" , "wxyz"},ans;
    void f (string s ,string k, int idx )
  {
    if(idx==s.size()) 
    {
      ans.push_back(k);
        return;
    }

    int digit = s[idx]-'0';
    for(int i = 0 ; i<vs[digit].size() ;i++)
    {
      f(s , k + vs[digit][i] , idx+1);
    }
  }
    vector<string> letterCombinations(string digits) {
        vector<string>y;
         if(digits.size()==0)      return y;
        string z;
        f(digits,z,0);
        return ans;
    }
};