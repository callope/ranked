package main

import (
  "errors"
  "fmt"
)

func main() {
  res, err := thisFuncWillPanic()
  fmt.Println(res, err)
}

func recovering() {
  if r := recover(); r != nil {
    return "value returned from recovering()", errors.New("error")
  }

}

func thisFuncWillPanic() {
  defer recovering()
  panic("hi, i'm the value given by panic")
}
