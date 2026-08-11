import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        boolean pigeon[][] = new boolean[11][2];
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int ans = 0;
        for (int i = 0; i < N; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            boolean flag = st.nextToken().equals("1");
            if (!pigeon[n][0]) {
                pigeon[n][0] = true;
                pigeon[n][1] = flag;
            }
            else if (pigeon[n][1]^flag) {
                ans++;
                pigeon[n][1] = flag;
            }
        }
        System.out.println(ans);
    }
}