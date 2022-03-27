//insertion.h - insertion sort
#include <algorithm>

// sort - Performs (a variation of) a selection sort on an array
template <typename T>
void sort (T a[], int n) {
	//creates a loop that expands the array value being compared
  for (int size = 1; size < n; size++) {   
    // this will conintually swap values with index below the 
    //index that was just added onto the array.  
    //making the program compare all indexes in the array up to, a[0];   
    while(a[size] < a[size-1] && (size-1)>= 0){
      std::swap(a[size-1], a[size]); 
      size--; 
    }
	}
}