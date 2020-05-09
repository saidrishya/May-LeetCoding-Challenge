class Solution {
public:
    bool isPerfectSquare(int num) {
        int k = floor(sqrt(num));
        return (k*k == num);
    }
};
