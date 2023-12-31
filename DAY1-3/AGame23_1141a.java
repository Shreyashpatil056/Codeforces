import java.util.*;
public class AGame23_1141a {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

//        int a = 1;
//        int b = 223092870;

        System.out.print(solve(a,b));
    }

    public static int solve(int a, int b) {
        if( a == b){
            return 0;
        }
        if( b % a != 0 ){
            return -1;
        }
        if(b % 2 != 0  && b % 3 != 0){
            return -1;
        }

        int count=0;

        int c = b / a;
        int i=1,j=1;

        while(c % Math.pow(2,i) == 0){
            c /= Math.pow(2,i);
            count+= i;
            i++;
        }

        while(c % Math.pow(3,j) == 0){
            c/= Math.pow(3,j);
            count+=j;
            j++;
        }

        while(c != 1){
            if(c % 2 == 0){
                c/=2;
                count++;
            }
            if(c % 3 == 0){
                c /= 3;
                count++;
            }

            if(c % 2 != 0  && c % 3 != 0 && c!= 1){
                return -1;
            }
        }
        return count;
    }
}
