import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        List<Integer> list = new ArrayList<>();
        for (int i = 1; i <= 9; i++) {
            for (int j = 1; j <= 9; j++) {
                if (i == j) continue;
                for (int k = 1; k <= 9; k++) {
                    if (i == k || j == k) continue;
                    list.add(i*100+j*10+k);
                }
            }
        }

        int n = Integer.parseInt(br.readLine());
        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int num = Integer.parseInt(st.nextToken());
            int s = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            
            Iterator<Integer> it = list.iterator();

            while (it.hasNext()) {
                int tmp = it.next();

                int a1 = tmp / 100;
                int a2 = tmp / 10 % 10;
                int a3 = tmp % 10;

                int b1 = num / 100;
                int b2 = num / 10 % 10;
                int b3 = num % 10;

                int strike = 0;
                int ball = 0;

                if (a1 == b1) strike++;
                if (a2 == b2) strike++;
                if (a3 == b3) strike++;

                if (a1 == b2 || a1 == b3) ball++;
                if (a2 == b1 || a2 == b3) ball++;
                if (a3 == b1 || a3 == b2) ball++;

                if (strike != s || ball != b) {
                    it.remove();
                }
            }
        }
        System.out.println(list.size());
    }
}