package main

import (
  "fmt"
  "strings"
)

func CreatePhoneNumber(digits []uint32) string {
  return fmt.Sprintf("(%v%v%v) %v%v%v-%v%v%v%v", digits[:10]...)
}
