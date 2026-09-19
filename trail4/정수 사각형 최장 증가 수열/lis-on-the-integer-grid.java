import java.io.*;
import java.util.*;

public class Main {
    static int n, grid[][], steps[][];
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine());
        grid = new int[n][n];
        steps = new int[n][n];
        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int j = 0; j < n; j++) {
                grid[i][j] = Integer.parseInt(st.nextToken());
                steps[i][j] = 1;
            }
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ans = Math.max(ans, dp(i, j));
            }
        }
        System.out.println(ans);
    }

    static int dr[] = {-1, 1, 0, 0};
    static int dc[] = {0, 0, -1, 1};
    static int dp(int row, int col) {
        if (steps[row][col] != 1) {
            return steps[row][col];
        }
        for (int d = 0; d < 4; d++) {
            int nr = row + dr[d];
            int nc = col + dc[d];
            if (nr < 0 || nc < 0 || nr >= n || nc >= n || grid[row][col] <= grid[nr][nc]) continue;
            steps[row][col] = Math.max(steps[row][col], dp(nr, nc) + 1);
        }
        return steps[row][col];
    }
}