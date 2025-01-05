// https://www.codewars.com/kata/56a5d994ac971f1ac500003e/train/go
package main

import (
  "strings"
  "fmt"
)

func LongestConsec(s []string, k int) string {
  longestString := ""
  for i := 0; i <= len(s) - k; i++ {
    strip := s[i:i+k]
    if len(strings.Join(strip, "")) > len(longestString) {
      longestString = strings.Join(strip, "")
    }
  }
  return longestString
}

func main() {
  fmt.Println(LongestConsec([]string{"zone", "abigail", "theta", "form", "libe", "zas"}, 2))
}
