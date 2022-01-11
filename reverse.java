import java.util.Scanner;

public class reverse_string {
    public static void main(String[] args) {
        Scanner inpt = new Scanner(System.in);
        System.out.println("String: ");

        String s = inpt.nextLine();
        inpt.close();
        String r = "";

        int i=0;
        for(i=s.length()-1;i>-1;i--){
            r+=s.charAt(i);
        }
        System.out.println(r);
    }
}