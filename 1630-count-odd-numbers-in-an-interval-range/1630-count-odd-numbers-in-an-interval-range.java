class Solution {
    static int count = 0;
    public int countOdds(int low, int high) {
        return high%2==0 ? (high-low+1)/2:(high-low+1+1)/2;
    }
}