package main

import "fmt"
/*
 * Complete the 'reverseArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
*/

// NOTE: passed.
func reverseArray(a []int32) []int32 {
	traverseLimit := len(a)
  for i := range a {
    if i >= traverseLimit / 2 { break }
    a[i], a[len(a) - i - 1] = a[len(a) - i - 1], a[i]
  }
  return a
}
