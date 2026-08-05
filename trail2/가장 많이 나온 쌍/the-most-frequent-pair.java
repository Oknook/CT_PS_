import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int mat[][] = new int[N+1][N+1];
        for (int i = 0; i < M; i++) {
            st = new StringTokenizer(br.readLine());
            mat[Integer.parseInt(st.nextToken())][Integer.parseInt(st.nextToken())]++;
        }
        int ans = 0;
        for (int i = 0; i < N+1; i++) {
            for (int j = i; j < N+1; j++) {
                if (i == j) ans = Math.max(ans, mat[i][j]);
                else ans = Math.max(ans, mat[i][j]+mat[j][i]);
            }
        }
        System.out.println(ans);
    }
}