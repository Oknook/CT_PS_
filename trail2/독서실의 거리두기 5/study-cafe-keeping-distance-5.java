import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        char[] table = new char[N];
        table = br.readLine().toCharArray();

        int ans = 0;
        for (int i = 0; i < N; i++) {
            if (table[i] == '1') continue;
            boolean[] arr = new boolean[N];
            for (int j = 0; j < N; j++) {
                arr[j] = (table[j] == '1');
                if (j == i) arr[j] = true;
            }
            
            int start = 0;
            for (int j = 0; j < N; j++) {
                if (arr[j]) {
                    start = j;
                    break;
                }
            }
            
            int cnt = 0;
            int mn = Integer.MAX_VALUE;
            for (int j = start+1; j < N; j++) {
                cnt++;
                if (arr[j]) {
                    mn = Math.min(mn, cnt);
                    cnt = 0;
                }
            }
            ans = Math.max(ans, mn);
        }
        System.out.println(ans);
    }
}