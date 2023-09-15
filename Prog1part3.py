def main():
    track = int(input("Milliseconds: "))
    
    minu = track // 60000
    track = track - (60000 * minu)

    seco = track // 1000
    track = track - (1000 * seco)

    milli = track

    print(f'minute(s): {minu}\nsecond(s): {seco}\nmilliseconds: {milli}')

if __name__ == "__main__":
    main()

