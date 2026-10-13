public class LinearSearch {
    public static void main(String[] args) {
        int[] arr = {5, 2, 1, 4, 3};
        int target = 1;
        boolean found = false;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) {
                System.out.println("The Target is at index " + i);
                found = true;
                break;
            }
        }

        if (!found) {
            System.out.println("Target not found.");
        }
    }
}