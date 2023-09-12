def main():
    quarters = int(input("Quarters: "))
    dimes = int(input("Dimes: "))
    nickels = int(input("Nickels: "))
    pennies = int(input("Pennies: "))

    total = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies
    cents = total % 100
    dollars = (total - cents) // 100

    print(f'Amount: ${dollars}.{cents}')

if __name__ == "__main__":
    main()
