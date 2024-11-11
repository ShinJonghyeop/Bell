def main():
    n = int(input())
    cards = set(map(int, input().split()))
    m = int(input())
    numbers = list(map(int, input().split()))
    result = []
    for num in numbers:
        if num in cards:
            result.append(1)
        else:
            result.append(0)

    print(" ".join(map(str, result)))

if __name__ == "__main__":
    main()
