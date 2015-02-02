package tests;
import java.util.*;
import java.lang.*;
import java.io.*;
import judge.*;
import datastruct.*;

public class rotate_array {
    public static int num_test = 60;
    public static int[][] in_0;
    public static int[][] in_org_0;
    public static int[] in_1;
    public static int[] in_org_1;
    public static int[][] out;


    public static void load_test() {
        File fil = new File("judge/tests/rotate-array.txt");
        FileReader inputFil = null;
        try {
            inputFil = new FileReader(fil);
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
        BufferedReader in = new BufferedReader(inputFil);
        try {
            in_0 = common.read_int_matrix(in);
            in_org_0 = test_common.copy(in_0);
            in_1 = common.read_int_array(in);
            in_org_1 = test_common.copy(in_1);
            out = common.read_int_matrix(in);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static void judge() {
        load_test();
        Solution s = new Solution();

        long startTime = System.currentTimeMillis();

        for(int i = 0; i < num_test; ++i) {
        s.rotate_array(in_0[i], in_1[i]);
        int[] answer = in_0[i];
            if(!common.equals(out[i], answer)) {
                System.out.printf("%d / %d;", i+1, num_test);
                String outs = common.to_string(rotate_array.in_org_0[i]) + ", " + common.to_string(rotate_array.in_org_1[i]);
                System.out.print(outs + ";");
                System.out.print(common.to_string(answer) + ";");
                System.out.println(common.to_string(out[i]));
                return;
            }
        }

        long estimatedTime = System.currentTimeMillis() - startTime;
        System.out.print("Accepted;");
        System.out.println(estimatedTime);
    }
}