# Write a program that takes as input one decimal number N, and prints its binary form.

# Input Format

# One number N.

# Constraints

# 0 <= N <= 10^18

# Output Format

# Binary representation of the number N.

# Sample Input 0

# 2
# Sample Output 0

# 10

n=int(input())
b=bin(n)
print(b[2:])

# b= 0b10, therefore, b[2:] 

