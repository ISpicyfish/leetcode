//English description is not available for the problem. Please switch to Chinese
//. 
// 
// Related Topics 数组 
// 👍 124 👎 0


//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int game(vector<int>& guess, vector<int>& answer) {
        int result = 0;
        for (int i = 0; i < 3; i ++) {
            if (guess[i] == answer[i]) {
                result++;
            }
        }
        return result;

    }
};
//leetcode submit region end(Prohibit modification and deletion)
