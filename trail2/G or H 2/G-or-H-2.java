import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        char arr[] = new char[101];
        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            arr[Integer.parseInt(st.nextToken())-1] = st.nextToken().charAt(0);
        }

        int ans = 0;
        for (int l = 100; l >= 0; l--) {
            for (int i = 0; i+l <= 100; i++) {
                if ((arr[i] != 'G' && arr[i] != 'H') || (arr[i+l] != 'G' && arr[i+l] != 'H')) continue;
                int g = 0;
                int h = 0;

                for (int j = i; j <= i + l; j++) {
                    if (arr[j] == 'G') g++;
                    else if (arr[j] == 'H') h++;
                }

                if (g + h == 0) continue;

                if (g == 0 || h == 0 || g == h) {
                    ans = l;
                    break;
                }
            }

            if (ans != 0) break;
        }

        System.out.println(ans);
    }
}