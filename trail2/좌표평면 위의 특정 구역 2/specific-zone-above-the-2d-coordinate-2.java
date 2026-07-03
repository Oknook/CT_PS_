import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int points[][] = new int[N][2];
        for (int i = 0; i < N; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            points[i][0] = Integer.parseInt(st.nextToken());
            points[i][1] = Integer.parseInt(st.nextToken());
        }
        
        int answer = Integer.MAX_VALUE;
        for (int i = 0; i < N; i++) {
            int maxr = 0, minr = 40000, maxc = 0, minc = 40000;
            for (int j = 0; j < N; j++) {
                if (j == i) continue;
                maxr = Math.max(maxr, points[j][0]);
                minr = Math.min(minr, points[j][0]);
                maxc = Math.max(maxc, points[j][1]);
                minc = Math.min(minc, points[j][1]);
            }
            answer = Math.min(answer, (maxr-minr)*(maxc-minc));
        }
        System.out.println(answer);
    }
}