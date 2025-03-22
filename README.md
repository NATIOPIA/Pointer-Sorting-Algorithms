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

## Complexity Analysis For Quick Sorting
1. Time Complexity:
    -Worst Case: O(n²)
        -This occurs when the pivot chosen is the smallest or largest element repeatedly, leading to unbalanced partitions. This is common in already sorted or reverse-sorted arrays.
    -Average Case: O(n log n)
        -On average, Quick Sort partitions the array into two equal halves, leading to logarithmic depth in recursion.
    -Best Case: O(n log n)
        -The best-case scenario also occurs when the pivot divides the array into two equal halves consistently.
2. Space Complexity:
    -O(log n)
        -This is due to the recursive stack space used by the algorithm. In the worst case, the space complexity can degrade to O(n) for highly unbalanced partitions.

# Summary For Quick Sorting
    -Efficiency: Quick Sort is generally efficient with an average time complexity of O(n log n), making it suitable for large datasets compared to simpler algorithms like Bubble Sort or Selection Sort.
    -Stability: Quick Sort is not a stable sorting algorithm; the relative order of equal elements may not be preserved.
    -In-Place: The algorithm is in-place, using minimal additional storage (O(log n) for the recursion stack).
    -Use Cases: Quick Sort is widely used in practice, especially in systems where performance is critical. Its efficiency, combined with its in-place sorting capability, makes it a popular choice for both general-purpose and specialized sorting tasks.    