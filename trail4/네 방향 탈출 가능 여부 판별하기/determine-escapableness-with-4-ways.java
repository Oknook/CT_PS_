import java.io.*;
import java.util.*;

public class Main {
    static int N, M;
    static boolean visited[][], mat[][];
    static class Point {
        int r, c;
        Point(int r, int c) {
            this.r = r;
            this.c = c;
        }
    }
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

        boolean ans = bfs();
        System.out.println(ans?1:0);
    }

    static int dr[] = {-1, 1, 0, 0};
    static int dc[] = {0, 0, -1, 1};
    static boolean bfs() {
        Queue<Point> q = new LinkedList<>();
        q.add(new Point(0, 0));
        visited[0][0] = true;

        while (!q.isEmpty()) {
            Point cur = q.poll();
            int r = cur.r;
            int c = cur.c;
            for (int d = 0; d < 4; d++) {
                int nr = r + dr[d];
                int nc = c + dc[d];
                if (nr < 0 || nc < 0 || nr >= N || nc >= M || visited[nr][nc]) continue;
                if (nr == N-1 && nc == M-1) return true;
                if (mat[nr][nc]) {
                    visited[nr][nc] = true;
                    q.add(new Point(nr, nc));
                }
            }
        }

        return false;
    }
}