def find_max_min(array):
    # Initialize maximum and minimum with the first element
    max_element = min_element = array[0]
    
    # Iterate through the array
    for num in array:
        if num > max_element:
            max_element = num
        if num < min_element:
            min_element = num
            
    return max_element, min_element

# Example usage
array = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
max_element, min_element = find_max_min(array)
print(f"Maximum element: {max_element}")
print(f"Minimum element: {min_element}")
