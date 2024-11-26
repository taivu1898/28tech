import math


def sumDivisor(n: int) -> int:
    s = 0
    for i in range(1, int(math.sqrt(n + 1))):
        if n % i == 0:
            s += i
            if n // i != i:
                s += n // i
    return s


if __name__ == "__main__":
    n = int(input())
    result = sumDivisor(n)
    print(result)
