Rightmost different bit

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        int temp = 1;
        for(int i = 0;i < 32;i++){
            if((temp & n) != (temp & m))
                return i + 1;
            temp = temp << 1;
        }
        return -1;
    }
};