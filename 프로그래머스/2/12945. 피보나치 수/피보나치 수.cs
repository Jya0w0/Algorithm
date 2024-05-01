public class Solution {
    public int solution(int n) {
        long answer = 0;
        long a = 0;
        long b = 1;
        for(int i = 2; i <= n; i++) {
            answer = (a + b) % 1234567;
            a = b;
            b = answer;
        }
        return (int)answer;
    }
}