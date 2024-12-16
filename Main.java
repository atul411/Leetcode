import java.util.Scanner;

public class Main {
    public static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int t = scanner.nextInt();
        while (t-- > 0) {
            testCase();
        }


    }

    private static void testCase() {
        int n = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        int m = scanner.nextInt(), first, second;
        int[] leftToRight = new int[n], rightToLeft = new int[n];
        leftToRight[1] = 1;
        for (int i = 1; i < n - 1; i++) {
            if (arr[i + 1] - arr[i] < arr[i] - arr[i - 1]) {
                leftToRight[i + 1] += 1 + leftToRight[i];
            } else {
                leftToRight[i + 1] += arr[i + 1] - arr[i] + leftToRight[i];
            }
        }
        rightToLeft[n - 2] = 1;
        for (int i = n - 2; i > 0; i--) {
            if (arr[i] - arr[i - 1] < arr[i + 1] - arr[i]) {
                rightToLeft[i - 1] += 1 + rightToLeft[i];
            } else {
                rightToLeft[i - 1] += arr[i] - arr[i - 1] + rightToLeft[i];
            }
        }
        for (int i = 0; i < m; i++) {
            first = scanner.nextInt();
            second = scanner.nextInt();
            if (first < second) {
                System.out.println(leftToRight[second - 1] - leftToRight[first - 1]);
            } else {
                System.out.println(rightToLeft[second - 1] - rightToLeft[first - 1]);
            }
        }
    }
}








