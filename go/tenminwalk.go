package kata


func IsValidWalk(walk []rune) bool {
  var n, s, e, w int
  for _, direction := range walk {
    switch direction {
      case 'n': n += 1
      case 's': s += 1
      case 'w': w += 1
      case 'e': e += 1
    }
  }

  if n != s || w != e { return false }
  if len(walk) != 10 { return false }
  return true
}
