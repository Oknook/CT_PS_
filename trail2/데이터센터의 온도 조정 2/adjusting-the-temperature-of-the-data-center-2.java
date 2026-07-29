import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int C = Integer.parseInt(st.nextToken());
        int G = Integer.parseInt(st.nextToken());
        int H = Integer.parseInt(st.nextToken());

        int m[][] = new int[N][2];
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            m[i][0] = Integer.parseInt(st.nextToken());
            m[i][1] = Integer.parseInt(st.nextToken());
        }

        int ans = 0;
        for (int i = -1; i <= 1001; i++) {
            int tmp = 0;
            for (int j = 0; j < N; j++) {
                if (i < m[j][0]) tmp += C;
                else if (i <= m[j][1]) tmp += G;
                else tmp += H;
            }
            ans = Math.max(ans, tmp);
        }
        System.out.println(ans);
    }
}