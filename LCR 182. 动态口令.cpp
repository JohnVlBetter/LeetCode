class Solution {
public:
    string dynamicPassword(string password, int target) {
        std::reverse(password.begin(), password.begin()+target);
        std::reverse(password.begin()+target, password.end());
        std::reverse(password.begin(), password.end());
        return password;
    }
};