int CountClimb(int n ,  vector<int>& stairs) {
    // base case
    if(n==0 || n==1) return 1;
    if(stairs[n] != -1) return stairs[n];

    return stairs[n] = CountClimb(n-1,stairs) + CountClimb(n-2, stairs);
}
    int climbStairs(int n) {
        vector<int>stairs(n+1,-1);
        return CountClimb(n,stairs);
    }
