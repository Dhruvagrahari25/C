// import java.util.Scanner;

// public class Q16 {
//     public static void MergeSort(int[] OriginalArray){
//         int size = OriginalArray.length;

//         if (size<2) {
//             return;
//         }

//         int leftSize = size/2;
//         int rightSize = size-leftSize;

//         int[] left = new int[leftSize];
//         int[] right = new int[rightSize];

//         for(int i=0; i<leftSize; i++){
//             left[i] = OriginalArray[i];
//         }
//         for(int i=leftSize; i<size-leftSize; i++){
//             right[i-leftSize] = OriginalArray[i];
//         }

//         MergeSort(left);
//         MergeSort(right);

//         Merge(OriginalArray,left,right);
        
//     }
//     private static void Merge(int[] OriginalArray, int[] left, int[] right){
//         int leftSize = left.length;
//         int rightSize = right.length;
//         int i=0, j=0, k=0;
//         while (i<leftSize && j<rightSize) {
//             if (left[i]<=right[j]) {
//                 OriginalArray[k]=left[i];
//                 i++;
//             } else {
//                 OriginalArray[k]=right[j];
//                 j++;
//             }
//             k++;
//         }
//         while (i<leftSize) {
//             OriginalArray[k]=left[i];
//             i++;
//             k++;
//         }
//         while (j<rightSize) {
//             OriginalArray[k]=right[j];
//             j++;
//             k++;
//         }
//     }
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//         System.out.printf("Ente the size of array:");
//         int size = sc.nextInt();

//         int[] OriginalArray = new int[size];

//         System.out.printf("Enter %d elemnts in array:\n",size);

//         for(int i=0; i<size; i++){
//             OriginalArray[i] = sc.nextInt();
//         }

//         MergeSort(OriginalArray);
//         System.out.println("Sorted Array:");
//         for(int i=0; i<size; i++){
//             System.out.printf("%d\t",OriginalArray[i]);
//         }
//     }
// }


import java.util.Scanner;

public class Q16 {
    public static void MergeSort(int[] OriginalArray){
        int size = OriginalArray.length;
        if (size < 2) {
            return; // base case: if the array has less than two elements, do nothing
        }

        int mid = size / 2;
        int[] left = new int[mid];
        int[] right = new int[size - mid];

        for(int i = 0; i < mid; i++){
            left[i] = OriginalArray[i];
        }
        for(int i = mid; i < size; i++){
            right[i - mid] = OriginalArray[i];
        }

        MergeSort(left);
        MergeSort(right);
        Merge(OriginalArray, left, right);
    }
    private static void Merge(int[] OriginalArray, int[] left, int[] right){
        int leftSize = left.length;
        int rightSize = right.length;
        int i = 0, j = 0, k = 0;
        while (i < leftSize && j < rightSize) {
            if (left[i] <= right[j]) {
                OriginalArray[k] = left[i];
                i++;
            } else {
                OriginalArray[k] = right[j];
                j++;
            }
            k++;
        }
        while (i < leftSize) {
            OriginalArray[k] = left[i];
            i++;
            k++;
        }
        while (j < rightSize) {
            OriginalArray[k] = right[j];
            j++;
            k++;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the size of array:");
        int size = sc.nextInt();

        int[] OriginalArray = new int[size];

        System.out.printf("Enter %d elements in array:\n", size);
        for(int i = 0; i < size; i++){
            OriginalArray[i] = sc.nextInt();
        }

        MergeSort(OriginalArray);

        System.out.println("Sorted Array:");
        for(int i = 0; i < size; i++){
            System.out.printf("%d\t", OriginalArray[i]);
        }
        System.out.println(); // print a newline at the end
        sc.close();
    }
}
