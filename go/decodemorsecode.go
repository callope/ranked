// https://www.codewars.com/kata/54b724efac3d5402db00065e/train/go
package main

import (
  "strings"
  "fmt"
)

func DecodeMorse(morseCode string) string {
  var decoded strings.Builder

  table := map[string]string{
      ".-":    "A",
      "-...":  "B",
      "-.-.":  "C",
      "-..":   "D",
      ".":     "E",
      "..-.":  "F",
      "--.":   "G",
      "....":  "H",
      "..":    "I",
      ".---":  "J",
      "-.-":   "K",
      ".-..":  "L",
      "--":    "M",
      "-.":    "N",
      "---":   "O",
      ".--.":  "P",
      "--.-":  "Q",
      ".-.":   "R",
      "...":   "S",
      "-":     "T",
      "..-":   "U",
      "...-":  "V",
      ".--":   "W",
      "-..-":  "X",
      "-.--":  "Y",
      "--..":  "Z",
      "-----": "0",
      ".----": "1",
      "..---": "2",
      "...--": "3",
      "....-": "4",
      ".....": "5",
      "-....": "6",
      "--...": "7",
      "---..": "8",
      "----.": "9",
      ".-.-.-": ".",
      "--..--": ",",
      "..--..": "?",
      "-.-.--": "!",
      "-....-": "-",
      "-..-.":  "/",
      ".--.-.": "@",
      "-...-":  "=",
      ".-.-.":  "+",
      "---...": ":",
      "-.-.-.": ";",
      ".-..-.": "\"",
      "..--.-": "_",
      "...---...": "SOS"
  }

  for _, word := range strings.Split(morseCode, "   ") {
    for _, letter := range strings.Split(word, " ") {
      ascii := table[letter]
      decoded.Write([]byte(ascii))
    }
    decoded.Write([]byte(" "))
  }

  return strings.Trim(decoded.String(), " ")
}

func main() {
  fmt.Println(DecodeMorse(".... . -.--   .--- ..- -.. ."))
}
