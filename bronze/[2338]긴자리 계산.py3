# file: 2338.py
# author: limitkr
# version: 0.1
# date: 2024-09-26 15:18:24

from sys import stdin, stdout

input = stdin.readline
# print = stdout.write

A = int(input())
B = int(input())
print(A + B, A - B, A * B, sep='\n')
