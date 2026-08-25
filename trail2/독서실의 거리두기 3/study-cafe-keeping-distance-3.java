import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        char[] arr = br.readLine().toCharArray();
        int[] res = solve(arr);
        arr[res[0]+res[1]/2] = '1';
        
        int prev = 0;
        int ans = Integer.MAX_VALUE;

        for (int i = 1; i < N; i++) {
            if (arr[i] == '1') {
                ans = Math.min(ans, i - prev);
                prev = i;
            }
        }

        System.out.println(ans);
    }

    public static int[] solve(char[] arr) {
        int maxStart = 0;
        int maxLength = 0;

        int curStart = 0;
        int curLength = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == '0') {
                if (curLength == 0) {
                    curStart = i;
                }

                curLength++;

                if (curLength > maxLength) {
                    maxLength = curLength;
                    maxStart = curStart;
                }
            } else {
                curLength = 0;
            }
        }
        return new int[]{maxStart, maxLength};
    }
}