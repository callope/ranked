package kata

import "strings"

func toWeirdCase(s string) string {
  var r string

  input := strings.Split(s, " ")

  for _, word := range input {
    for i, l := range word {
      if i % 2 == 0 {
        r += strings.ToUpper(string(l))
      } else { r += string(l) }
    }
    
    r += string(" ")
  }

  return r
}
