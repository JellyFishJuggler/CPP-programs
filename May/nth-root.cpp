//return 1 when ans == m -> means that mid == m
// return 2 when ans > m -> mid != m && mid < m
// return 0 when ans < m -> mid != m && mid > m

class Solution{
  public:
  int poweOf(int mid, int n, int m) {
    long long ans = 1;
    for (int i = 1; i <= n; i++) {          
        ans = ans * mid;
        if (ans > m) return 2;
    }
    if (ans == m) return 1;
    return 0;
}

int NthRoot(int n, int m) {

    int low = 1, high = m;
    while (low <= high) {
        int mid = (low + high) / 2;
        int midN = powerOf(mid, n, m);
        if (midN == 1) {
            return mid;
        }
        else if (midN == 0) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

};