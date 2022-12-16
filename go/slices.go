package main

import "fmt"

func main() {
  a := []int{1, 2, 3, 4}
  fmt.Println(a[1:])
  fmt.Println(a[1:len(a)-1])
}
