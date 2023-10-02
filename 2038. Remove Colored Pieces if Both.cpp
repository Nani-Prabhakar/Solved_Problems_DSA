//2038. Remove Colored Pieces if Both Neighbors are the Same Color

class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = colors.size();
        int aConsecutive = 0;
        int bConsecutive = 0;

        for (int i = 0; i < n - 2; i++) {
            if (colors[i] == 'A' && colors[i + 1] == 'A' && colors[i + 2] == 'A') {
                aConsecutive++;
            } else if (colors[i] == 'B' && colors[i + 1] == 'B' && colors[i + 2] == 'B') {
                bConsecutive++;
            }
        }

        return aConsecutive > bConsecutive;
    }
};