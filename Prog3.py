def square(intValue):
    return intValue * intValue 

def sumOfSquares(intValue):
    total = 0
    for i in range(intValue):
        total += square(i + 1)
    return total

def isOdd(intValue):
    return bool(intValue % 2)

def isEven(intValue):
    return isOdd(intValue) == False

def compareTo(intValue1, intValue2):
    return int(intValue1 > intValue2) - int(intValue1 < intValue2)

def maxMagnitude(intValue1, intValue2, intValue3):
    maxMag = intValue1
    for i in intValue2, intValue3:
        maxMag = i if abs(i) > abs(maxMag) else maxMag
    return maxMag

def daysInFebruary(year):
    return 28 + int((year % 4 == 0) and (not(year % 100 == 0) or year % 400 == 0))

def militaryToRegularTime(militaryTime):
    minutes = militaryTime % 100
    hours = (militaryTime // 100) % 12
    hours = 12 if hours == 0 else hours
    ampm = "AM" if militaryTime < 1200 else "PM"
    return f"{hours:02d}:{minutes:02d} {ampm}"

def main():
    print("Hello Python")
    print(f"Square of 5: {square(5)}")
    print(f"Square of 6: {square(6)}")
    print(f"Sum of squares to 3: {sumOfSquares(3)}")
    print(f"Sum of squares to 4: {sumOfSquares(4)}")
    print(f"Value 3 is even?", isEven(3))
    print(f"Value 4 is even?", isEven(4))
    print(f"Value 3 is odd?", isOdd(3))
    print(f"Value 4 is odd?", isOdd(4))
    print(f"Compare result for 3, 4:", compareTo(3, 4))
    print(f"Compare result for 6, 5:", compareTo(6, 5))
    print(f"Compare result for 7, 7:", compareTo(7, 7))
    print(f"maxMagnitude(17, 5, 2) returns", maxMagnitude(17, 5, 2))
    print(f"maxMagnitude(10, -20, 2) returns", maxMagnitude(10, -20, 2))
    print(f"maxMagnitude(17, 5, 99) returns", maxMagnitude(17, 5, 99))
    print("daysInFebruary(2023) returns", daysInFebruary(2023))
    print("daysInFebruary(2024) returns", daysInFebruary(2024))
    print("daysInFebruary(1500) returns", daysInFebruary(1500))
    print("daysInFebruary(1600) returns", daysInFebruary(1600))
    print(f"militaryToRegularTime(500) returns \"{militaryToRegularTime(500)}\"")
    print(f"militaryToRegularTime(1500) returns \"{militaryToRegularTime(1500)}\"")
    print(f"militaryToRegularTime(1230) returns \"{militaryToRegularTime(1230)}\"")
    print(f"militaryToRegularTime(030) returns \"{militaryToRegularTime(30)}\"")


if __name__ == "__main__":
    main()

