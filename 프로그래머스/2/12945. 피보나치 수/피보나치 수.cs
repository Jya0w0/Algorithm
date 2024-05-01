public class Solution {
    public int solution(int n) {
        long answer = 0;
        long a = 0;
        long b = 1;
        for(int i = 0; i <= n; i++) {
            answer = a % 1234567;
            a += b % 1234567;
            b = answer;
        }
        return (int)answer;
    }
}