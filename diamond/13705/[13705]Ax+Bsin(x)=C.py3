# file: 13705.py
# author: limitkr
# version: 0.1
# date: 2024-08-22 10:16:34

from sys import stdin, stdout
from decimal import *

input = stdin.readline
print = stdout.write

def pi():
    three = Decimal('3')
    lasts, t, s, n, na, d, da, = 0, three, 3, 1, 0, 0, 24
    while s != lasts:
        lasts = s
        n, na = n + na, na + 8
        d, da = d + da, da + 32
        t = (t * n) / d
        s += t
    return +s


def cos(x):
    x = x % (Decimal('2') * pi())
    i, lasts, s, fact, num, sign = 0, 0, 1, 1, 1, 1
    while s != lasts:
        lasts = s
        i += 2
        fact *= i * (i - 1)
        num *= x * x
        sign *= -1
        s += num / fact * sign
    return +s


def sin(x):
    x = x % (Decimal('2') * pi())
    i, lasts, s, fact, num, sign = 1, 0, x, 1, x, 1
    safe_cnt = 1000
    while s != lasts and safe_cnt > 1:
        lasts = s
        i += 2
        fact *= i * (i - 1)
        num *= x * x
        sign *= -1
        s += num / fact * sign
        safe_cnt -= 1
    return +s


def fx(a, b, c, x):
    return a * x + b * sin(x) - c


def f1x(a, b, x):
    return a + b * cos(x)


A, B, C = map(int, input().split())
getcontext().prec = 50
getcontext().rounding = ROUND_HALF_UP
x = Decimal('1')
T = 1000
while T > 0:
    x = x - (fx(A, B, C, x) / f1x(A, B, x))
    T -= 1
print(f'{round(x, 6)}\n')
