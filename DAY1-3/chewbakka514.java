import java.util.Scanner;

import static java.lang.Math.pow;

public class chewbakka514 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String s = sc.next();

        int n = s.length();

        for(int i=0;i<n;i++){
            if(i==0 && s.charAt(i) == '9'){
                System.out.print(9);
                continue;
            }
            if(s.charAt(i) == '9'){
                System.out.print(0);
                continue;
            }
            if(s.charAt(i) == '8'){
                System.out.print(1);
                continue;
            }
            if(s.charAt(i) == '7'){
                System.out.print(2);
                continue;
            }
            if(s.charAt(i) == '6'){
                System.out.print(3);
                continue;
            }
            if(s.charAt(i) == '5'){
                System.out.print(4);
                continue;
            }
            System.out.print(s.charAt(i));
        }

    }
}


