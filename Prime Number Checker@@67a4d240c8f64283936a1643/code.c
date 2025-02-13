
    # If n is less than 2, it is not a prime number
    if n <= 1:
        return 0
    # Check if n has any divisors other than 1 and itself
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return 0
    return 1

# Example usage
number = 17
if is_prime(number):
    print(f"{number} is a prime number.")
else:
    print(f"{number} is not a prime number.")
/ Your code here...