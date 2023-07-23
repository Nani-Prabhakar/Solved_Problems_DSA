class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>ans;
        for (const std::string& word : words) {
            string s = "";
            for (char c : word) {
                if (c != separator) {
                    s += c;
                } else {
                    if (!s.empty()) {
                        ans.push_back(s);
                        s = "";
                    }
                }
            }

            if (!s.empty()) {
                ans.push_back(s);
            }
        }

        return ans;
    }
};