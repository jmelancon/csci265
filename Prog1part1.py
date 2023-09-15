def main():
    first = str(input("First: "))
    last = str(input("Last: "))
    address = str(input("Address: "))
    city = str(input("City: "))
    state = str(input("State: "))
    zipcode = str(input("Zip: "))

    print("\n" + first, end=" ")
    print(last)
    print(address)
    print(city, end=", ")
    print(state, end="  ")
    print(zipcode)

if __name__ == "__main__":
    main()

