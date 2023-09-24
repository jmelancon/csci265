def main():
    x = int(input("Enter width: "))
    y = int(input("Enter height: "))
    printChar = str(input("Enter character: "))

    print()

    for i in range(y):
        for j in range(x):
            print(printChar, end="")
        print()

if __name__ == "__main__":
    main()
