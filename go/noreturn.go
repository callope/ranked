package main

func main() {
  a := ""

  defer yesReturn(a)

  noReturn()
  println(a)
}

func yesReturn()

func noReturn() {
  panic("a")
}
