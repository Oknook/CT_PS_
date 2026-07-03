import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int arr[] = new int[5];
        boolean visit[] = new boolean[5];
        StringTokenizer st = new StringTokenizer(br.readLine());
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
            sum += arr[i];
        }
        int a,b,c;
        int answer = Integer.MAX_VALUE;
        for (int i = 0; i < 4; i++) {
            visit[i] = true;
            for (int j = i+1; j < 5; j++) {
                visit[j] = true;
                a = arr[i] + arr[j];
                for (int k = 0; k < 4; k++) {
                    if (visit[k]) continue;
                    visit[k] = true;
                    for (int l = k+1; l < 5; l++) {
                        if (visit[l]) continue;
                        b = arr[k] + arr[l];
                        c = sum - a - b;
                        if (a == b || a == c || b == c) continue;

                        int mx = Math.max(a, b);
                        mx = Math.max(mx, c);
                        int mn = Math.min(a, b);
                        mn = Math.min(mn, c);

                        if (answer > (mx-mn)) answer = (mx-mn);
                    }
                    visit[k] = false;
                }
                visit[j] = false;
            }
            visit[i] = false;
        }

        if (answer == Integer.MAX_VALUE) answer = -1;
        System.out.println(answer);
    }
}