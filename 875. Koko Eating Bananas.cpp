//875. Koko Eating Bananas


class Solution {
    long long rhours(vector<int> arr, int h) {
        long long thours = 0;
        for (int i = 0; i < arr.size(); i++) {
            thours += ceil((double)arr[i] / (double)h);
        }
        return thours;
    }

    int maxi(vector<int>& piles) {
        int maxe = 0;
        for (int i = 0; i < piles.size(); i++) {
            maxe = max(maxe, piles[i]);
        }
        return maxe;
    }

public:
    int minEatingSpeed(vector<int>& piles, int hrs) {
        int l = 1;
        int h = maxi(piles);
        while (l <= h) {
            int mid = (l + h) / 2;
            long long thours = rhours(piles, mid);
            if (thours <= hrs) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};
