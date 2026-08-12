import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int A = Integer.parseInt(st.nextToken());
        int B = Integer.parseInt(st.nextToken());
        if (A > B) {
            int tmp = A;
            A = B;
            B = tmp;
        }
        int x = Integer.parseInt(st.nextToken());
        int y = Integer.parseInt(st.nextToken());
        if (x > y) {
            int tmp = x;
            x = y;
            y = tmp;
        }
        int ans = B-A;
        int tmp = Math.abs(A-x) + Math.abs(B-y);
        ans = Math.min(ans, tmp);
        System.out.println(ans);
    }
}