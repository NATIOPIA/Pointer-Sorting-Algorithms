# Pointer-Sorting-Algorithms 

## Student Information
   Name:Natnael Tsedeke
   ID:RMNS-7783-/23
   Course:DSA

## Complexity Analysis for Bubble Sorting
1. Time Complexity:
    -Worst Case: O(n²)
        -This occurs when the array is sorted in reverse order. The algorithm has to make the maximum number of comparisons and swaps.
    -Average Case: O(n²)
        -On average, the algorithm will have to go through the array multiple times, leading to quadratic time complexity.
    -Best Case: O(n)
        -This occurs when the array is already sorted. A small optimization can be added to check if any swaps were made in an iteration, allowing the algorithm to terminate early.
2. Space Complexity:
    -O(1)
        -Bubble Sort is an in-place sorting algorithm, meaning it does not require additional storage proportional to the input size.

## Summary For Bubble Sorting
    -Efficiency: Bubble Sort is generally inefficient for large datasets due to its O(n²) time complexity in both average and worst cases. It performs well on small datasets or nearly sorted arrays.
    -Stability: Bubble Sort is a stable sorting algorithm, which means that the relative order of equal elements is preserved.
    -In-Place: The algorithm operates in-place, requiring only a constant amount of additional storage space (O(1)).
    -Use Cases: While Bubble Sort is not commonly used in practice due to its inefficiency, it is often taught as an introductory sorting algorithm because of its simplicity and ease of understanding.