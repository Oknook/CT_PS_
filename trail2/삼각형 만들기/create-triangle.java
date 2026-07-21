import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int[][] points = new int[N][2];
        for (int i = 0; i < N; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            points[i][0] = Integer.parseInt(st.nextToken());
            points[i][1] = Integer.parseInt(st.nextToken());
        }

        int ans = 0;
        for (int i = 0; i < N-2; i++) {
            for (int j = i+1; j < N-1; j++) {
                for (int k = j+1; k < N; k++) {
                    boolean ok =
                    (points[j][0] == points[i][0] && points[k][1] == points[i][1]) ||
                    (points[j][1] == points[i][1] && points[k][0] == points[i][0]) ||

                    (points[i][0] == points[j][0] && points[k][1] == points[j][1]) ||
                    (points[i][1] == points[j][1] && points[k][0] == points[j][0]) ||

                    (points[i][0] == points[k][0] && points[j][1] == points[k][1]) ||
                    (points[i][1] == points[k][1] && points[j][0] == points[k][0]);

                if (!ok) continue;

                    ans = Math.max(ans, Math.abs((
                        points[i][0]*points[j][1]
                        + points[j][0]*points[k][1]
                        + points[k][0]*points[i][1])
                        -(points[j][0]*points[i][1]
                        + points[k][0]*points[j][1]
                        + points[i][0]*points[k][1])));
                }
            }
        }
        System.out.println(ans);
    }
}