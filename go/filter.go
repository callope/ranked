package main

import "fmt"

// TODO: generic one
func main() {
  list := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
  f := func(x int) bool {
    if x % 2 == 0 { return true }
    return false
  }
  items := Filter(f, list)

  fmt.Println(list)
  fmt.Println(items)
}

type filter func(x int) bool

func Filter(x filter, list []int) []int {
  res := []int{}
  for _, item := range list {

    if x(item) {
      res = append(res, item)
    }
  }

  return res
}
