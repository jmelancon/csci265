def main():
    sv = int(input("Enter starting value: "))
    ev = int(input("Enter ending value: "))

    if sv > ev:
        incr = -1
    else:
        incr = 1

    print()

    for i in range(sv, ev, incr):
        print(i)
    print(ev)

if __name__ == "__main__":
    main()
