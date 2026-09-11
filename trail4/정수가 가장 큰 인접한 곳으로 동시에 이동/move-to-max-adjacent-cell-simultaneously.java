import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int t = Integer.parseInt(st.nextToken());
        int[][] mat = new int[n][n];
        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < n; j++)
                mat[i][j] = Integer.parseInt(st.nextToken());
        }
        int[][] marbles = new int[m][2];
        for (int i = 0; i < m; i++) {
            st = new StringTokenizer(br.readLine());
            marbles[i][0] = Integer.parseInt(st.nextToken())-1;
            marbles[i][1] = Integer.parseInt(st.nextToken())-1;
        }
        // Please write your code here.
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        for (int i = 0; i < t; i++) {
            for (int j = 0; j < m; j++) {
                if (marbles[j][0] == -1) continue;
                int b = 0;
                int tmp = 0;
                for (int d = 0; d < 4; d++) {
                    int nr = marbles[j][0] + dr[d];
                    int nc = marbles[j][1] + dc[d];
                    if (nr < 0 || nc < 0 || nr >= n || nc >= n) continue;
                    if (mat[nr][nc] > tmp) {
                        b = d;
                        tmp = mat[nr][nc];
                    }
                }
                marbles[j][0] += dr[b];
                marbles[j][1] += dc[b];
            }
            for (int j = 0; j < m-1; j++) {
                boolean flag = false;
                for (int k = j+1; k < m; k++) {
                    if (marbles[j][0] == marbles[k][0] && marbles[j][1] == marbles[k][1]) {
                        marbles[k][0] = -1;
                        flag = true;
                    }
                }
                if (flag) {
                    marbles[j][0] = -1;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < m; i++) {
            if (marbles[i][0] != -1) ans++;
        }
        System.out.println(ans);
    }
}