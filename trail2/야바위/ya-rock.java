import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        boolean cups[] = new boolean[3];
        int N = Integer.parseInt(br.readLine());
        int orders[][] = new int[N][3];
        for (int i = 0; i < N; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            orders[i][0] = Integer.parseInt(st.nextToken())-1;
            orders[i][1] = Integer.parseInt(st.nextToken())-1;
            orders[i][2] = Integer.parseInt(st.nextToken())-1;
        }
        
        int ans = 0;
        for (int i = 0; i < 3; i++) {
            cups[i] = true;
            int cnt = 0;
            for (int j = 0; j < N; j++) {
                int a = orders[j][0];
                int b = orders[j][1];
                int c = orders[j][2];
                boolean tmp = cups[b];
                cups[b] = cups[a];
                cups[a] = tmp;
                if (cups[c]) cnt++;
            }
            ans = Math.max(ans, cnt);
            cups[0] = false;
            cups[1] = false;
            cups[2] = false;
        }
        System.out.println(ans);
    }
}