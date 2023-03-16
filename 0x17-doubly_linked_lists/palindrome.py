#!/usr/bin/python3
largest_palindrome = 0
for i in range(999, 99, -1):
    for j in range(i, 99, -1):
        product = i * j
        if product > largest_palindrome and str(product) == str(product)[::-1]:
            largest_palindrome = product

with open("102-result", "w") as file:
    file.write(str(largest_palindrome))
