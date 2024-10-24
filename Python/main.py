from math import sqrt


def isPrime(n: int):
    for i in range(2, int(sqrt(n) + 1)):
        if n % i == 0:
            return False
    return n > 1


if __name__ == "__main__":
    n = int(input())
    print(isPrime(n) if "YES" else "NO")
