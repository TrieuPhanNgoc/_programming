def printInWord(word):
    for letter in word:
        print(letter)

def printInEnumerated(word):
    for item in enumerate(word):
        print(item)

def main():
    word = "abcdedfg"
    printInWord(word)
    printInEnumerated(word)


main()