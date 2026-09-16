import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());

        boolean mat[][] = new boolean[N+1][N+1];
        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            int head = Integer.parseInt(st.nextToken());
            int tail = Integer.parseInt(st.nextToken());
            mat[head][tail] = true;
            mat[tail][head] = true;
        }

        boolean[] visited = new boolean[N + 1];
        Queue<Integer> q = new LinkedList<>();

        q.add(1);
        visited[1] = true;

        int ans = 0;

        while (!q.isEmpty()) {
            int v = q.poll();

            for (int i = 1; i <= N; i++) {
                if (mat[v][i] && !visited[i]) {
                    visited[i] = true;
                    q.add(i);
                    ans++;
                }
            }
        }

        System.out.println(ans);
    }
}