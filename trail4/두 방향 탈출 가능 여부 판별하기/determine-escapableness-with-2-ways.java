import java.io.*;
import java.util.*;

public class Main {
    static int N, M;
    static boolean visited[][], mat[][], ans = false;
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        mat = new boolean[N][M];
        visited = new boolean[N][M];

        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < M; j++) {
                mat[i][j] = Integer.parseInt(st.nextToken()) == 1;
            }
        }
        
        dfs(0, 0);

        System.out.println(ans?1:0);
    }
    static void dfs(int r, int c) {
        if (ans) return;
        if (r == N-1 && c == M-1) ans = true;

        visited[r][c] = true;
        if (r+1 < N && !visited[r+1][c] && mat[r+1][c]) dfs(r+1, c);
        if (c+1 < M && !visited[r][c+1] && mat[r][c+1]) dfs(r, c+1);
    }
}