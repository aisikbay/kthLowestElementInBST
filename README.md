# k<sup>th</sup> Lowest Binary Search Tree Element
Problem: Given an array of integers and an integer _k_, construct a balanced binary search tree from the array and find the _k_<sup>th</sup> lowest element.

## Example
>Input: int arr[15] = { 6, 17, 20, 41, 45, 52, 57, 65, 71, 76, 79, 87, 92, 95, 99 }, k=3<br>
>Output: The 3<sup>rd</sup> smallest element is 20.<br>

## Approach
This approach constructs the tree from the pre-sorted increasing array, then traverses the tree to print it and find its k<sup>th</sup> lowest element.
Watch it run: https://youtu.be/FgS2ZWmsX4I

* _Time Complexity_: _O(N)_ where _N_ is the height of the tree
* _Space Complexity_: _O(N)_

## Output:
<img src="https://github.com/aisikbay/kthLowestElementInBST/assets/94331548/5b7e1528-bfc3-4c55-b7f9-dbb802cd7ee0"></img>

