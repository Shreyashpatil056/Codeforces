import java.util.Scanner;

public class ABeautifulMatrix263 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int arr[][] = new int [5][5];
        int row=0,col=0;
        for(int i = 1 ; i <=5 ; i++){
            for( int j = 1 ; j <= 5 ; j++){
                arr[i-1][j-1] = sc.nextInt();
                if(arr[i-1][j-1] == 1){
                    row = i;
                    col = j;
                }
            }
        }

        int ans = 0;

        int temp = 3-row;

        if(temp>=0){
            ans+=temp;
        }else{
            ans = ans + (-1*temp);
        }

        temp = 3-col;

        if(temp>=0){
            ans+=temp;
        }else{
            ans = ans + (-1*temp);
        }
//        System.out.println(temp);
        System.out.print(ans);

    }
}
