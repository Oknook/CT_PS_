import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int start = Integer.parseInt(st.nextToken());
        int end = Integer.parseInt(st.nextToken());
        int ans = 0;
        for (int i = start; i <= end; i++) {
            ans = Math.max(ans, solve(i));
        }
        System.out.println(ans);
    }
    static int solve(int n) {
        int cnt = 0;
        while (n > 10) {
            cnt += n%10;
            n /= 10;
        }
        cnt += n;
        return cnt;
    }
}