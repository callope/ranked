package main

import (
  "fmt"
  "reflect"
)

func main() {
  fmt.Println(Sum(1, 3.5))
}

func Sum(a interface{}, b interface{}) interface{} {
  return reflect.ValueOf(a) + reflect.ValueOf(b)
}
