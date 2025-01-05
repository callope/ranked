package main

import "fmt" 

func ArrayDiff(a, b []int) []int {
  if len(b) == 0 { return a }

  diff := make([]int, 0, len(a))
  check := make(map[int]int)

  for _, e := range b { 
    check[e] = e
  }

  for _, e := range a {
    _, in := check[e]
    if !in {
      diff = append(diff, e)
    }
  }

  return diff
}


func main() {
  fmt.Println(ArrayDiff([]int{1, 2, 3}, []int{1, 2}))
}
