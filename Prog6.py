"""
Joseph Melancon
"""

def totalCredits(students: dict) -> int:
    """
    Counts the number of credits in the students dict
    """
    sum = 0
    for each in students.values():
        sum += each
    return sum


def classesByDept(students: dict, department: str) -> list:
    """
    Search for courses offered by a given department in a student dict
    """
    out = []
    for each in students.keys():
        if department == each.split(" ")[0]:
            out.append(each)
    return out


def classesByCredits(students: dict, credits: int) -> list:
    """
    Search through the students dict for courses with the specified number of credits
    """
    out = []
    for each in students.keys():
        if credits == students[each]:
            out.append(each)
    return out

def isPartTime(students: dict) -> bool:
    """
    Return T/F value for if student is part time based on number of credits
    """
    return totalCredits(students) < 12


def numOfClasses(students: dict) -> int:
    """
    Return the number of courses a student is taking
    """
    return len(students.keys())

def lowerLevelCredits(students: dict) -> int:
    """
    Returns the number of credits earned from <300 level courses
    """
    sum = 0
    for each in students.keys():
        if int(each.split(" ")[1]) < 300:
            sum += students[each]
    return sum

def printClasses(title: str, students: dict) -> None:
    """
    Print a table containing the data from the students dict
    """
    print(title)
    
    colHeads = ["Course", "Credits"]
    colLen = [len(colHeads[0]), len(colHeads[1])]

    # Find longest course string
    for each in students.keys():
        if len(each) > colLen[0]:
            colLen[0] = len(each)

    # Find longest credit string
    for each in students.values():
        if len(str(each)) > colLen[1]:
            colLen[1] = len(str(each))
    
    # Insertion sort the keys
    keyList = list(students.keys())
    for i in range(1, len(keyList)):
        while i > 0:
            if keyList[i] < keyList[i - 1]:
                keyList[i], keyList[i - 1] = keyList[i-1], keyList[i]
                i = i - 1
            else:
                break
    # Print table
    print(f"{colHeads[0]:<{colLen[0]}} {colHeads[1]:>{colLen[1]}}")
    for each in keyList:
        print(f"{each:<{colLen[0]}} {students[each]:>{colLen[1]}}")


def main():
    print("Hello Python 🐍")
    students = {
            "CSCI 242": 3,
            "MATH 207": 2,
            "PHYS 252": 4,
            "MUSC 101": 3,
            "CSCI 327": 3,
            "CSCI 265": 3
            }
    studentsTwo = {
            "CSCI 242": 3,
            "CSCI 265": 3,
            "CSCI 327": 3,
            "MATH 207": 2,
            }
    studentsThree = {
            "CSCI 242": 3,
            "CSCI 265": 3,
            "CSCI 327": 3,
            "MUSC 101": 3
            }
    print(totalCredits(students))
    print(f"CSCI courses: {classesByDept(students, 'CSCI')}")
    print(f"PSYC courses: {classesByDept(students, 'PSYC')}")
    print(f"Courses with 3 credits: {classesByCredits(students, 3)}")
    print(f"Student one is part-time: {isPartTime(students)}")
    print(f"Student two is part-time: {isPartTime(studentsTwo)}")
    print(f"Student three is part-time: {isPartTime(studentsThree)}")
    print(f"Number of classes taken by student one: {numOfClasses(students)}")
    print(f"Number of classes taken by student two: {numOfClasses(studentsTwo)}")
    print(f"Number of lower level credits taken by student one: {lowerLevelCredits(students)}")
    printClasses("Classes for student one", students)

if __name__ == "__main__":
    main()

