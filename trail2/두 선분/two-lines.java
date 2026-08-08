import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int a,b,c,d,t1, t2;
        t1 = Integer.parseInt(st.nextToken());
        t2 = Integer.parseInt(st.nextToken());
        if (t1 > t2) {
            a = t2;
            b = t1;
        }
        else {
            a = t1;
            b = t2;
        }
        t1 = Integer.parseInt(st.nextToken());
        t2 = Integer.parseInt(st.nextToken());
        if (t1 > t2) {
            c = t2;
            d = t1;
        }
        else {
            c = t1;
            d = t2;
        }

        if (b < c || d < a) System.out.println("nonintersecting");
        else System.out.println("intersecting");
    }
}