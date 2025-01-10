package main

import "strings"

func Solution(s string) (w []string) {
  if len(s) % 2 != 0 {
    s = strings.Join([]string{s, "_"}, "")
  }

  for i := 0; i < len(s) - 1; i += 2 {
    r = append(r, string(s[i:i+2]))
  }

  return
}
