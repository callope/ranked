function spinWords(string) {
  let words = string.split(" ")
  return words.map(word => {
    return word.length > 5 ? word.split("").reverse().join("") : word
  }).join(" ")
}
