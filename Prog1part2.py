def main():
    first = str(input("First: "))
    last = str(input("Last: "))
    address = str(input("Address: "))
    city = str(input("City: "))
    state = str(input("State: "))
    zipcode = int(input("Zip: "))

    print(f'\n{first} {last}\n{address}\n{city}, {state} {zipcode}')

if __name__ == "__main__":
    main()

