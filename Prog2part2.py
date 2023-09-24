def main():
    x = int(input("Enter width: "))
    y = int(input("Enter height: "))
    printChar = str(input("Enter character: "))

    print()

    i = 0
    while (i < y):
        j = 0
        while (j < x):
            print(printChar, end="")
            j += 1
        print()
        i += 1

if __name__ == "__main__":
    main()
