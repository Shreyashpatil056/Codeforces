package B;
import java.util.*;

public class presentFromLena1188 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();

        int temp = 1;
        int row = 0;
        int col = temp;
        for( ; row <= a ; row++){
//            System.out.print(row + "--->");
            int spaces = 2*a - row*2;
            while(spaces>0){
                System.out.print(" ");
                spaces--;
            }
            col = temp;
            if(row > a){
                temp -= 2;
            }else{
                temp += 2;
            }
            int j = 0;
            int k = 0;
            while(j < col) {
                if(j < row){
                    System.out.print(k++ + " ");
                    j++;
                }else{
                    System.out.print(k-- + " ");
                    j++;
                }
            }
            System.out.println();
        }

        int d = 1;
        for(row = a-1 ; row >= 0 ; row--){
//            System.out.print(row + "--->");
            int spaces = d++;
            while(spaces-- != 0){
                System.out.print("  ");
            }

            int j=0;
            int k=0;
            while(j++ < 2*row+1){
                if(j <= row){
                    System.out.print(k++ + " ");
                }else{
                    System.out.print(k-- + " ");
                }
            }


            System.out.println();
        }

//        _ _ _ _ _ 0
//        _ _ _ _ 0 1 0
//        _ _ _ 0 1 2 1 0
//        _ _ 0 1 2 3 2 1 0
//        _ 0 1 2 3 4 3 2 1 0
//        0 1 2 3 4 5 4 3 2 1 0
//        _ 0 1 2 3 4 3 2 1 0
//        _ _ 0 1 2 3 2 1 0
//        _ _ _ 0 1 2 1 0
//        _ _ _ _0 1 0
//        _ _ _ _ _0

    }
}


// 6  1
// 5  3
// 4  5
