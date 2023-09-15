def main():
    first = str(input("First: "))
    last = str(input("Last: "))
    address = str(input("Address: "))
    city = str(input("City: "))
    state = str(input("State: "))
    zipcode = str(input("Zip: "))

    print()
    print(first, last)
    print(address)
    print(city + ", " + state, " " + zipcode)

if __name__ == "__main__":
    main()

