package main

import (
  "fmt"
  "strings"
)

func main() {
  phrase := "         "

  words := strings.Split(phrase, "  ")
  for _, w := range words { fmt.Println(w) }
}
