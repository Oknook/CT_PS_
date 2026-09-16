import java.io.*;
import java.util.*;

public class Main {
    static int N, M, ans = 0;
    static boolean visited[], mat[][];
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        mat = new boolean[N+1][N+1];
        visited = new boolean[N + 1];
        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            int head = Integer.parseInt(st.nextToken());
            int tail = Integer.parseInt(st.nextToken());
            mat[head][tail] = true;
            mat[tail][head] = true;
        }
        
        dfs(1);

        System.out.println(ans);
    }
    static void dfs(int v) {

        visited[v] = true;

        for (int i = 1; i <= N; i++) {

            if (mat[v][i] && !visited[i]) {

                ans++;

                dfs(i);
            }
        }
    }
}