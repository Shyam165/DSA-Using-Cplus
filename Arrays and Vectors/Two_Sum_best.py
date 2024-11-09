def two_sum(nums, target):
    # Dictionary to store the complement and its index
    index_map = {}
    
    # Traverse the list
    for i, num in enumerate(nums):
        complement = target - num
        
        # Check if the complement exists in the dictionary
        if complement in index_map:
            return [index_map[complement], i]
        
        # Store the current number and its index in the dictionary
        index_map[num] = i
    
    # Return empty list if no solution is found
    return []

# Example usage
nums = [2, 7, 11, 15]
target = 9
result = two_sum(nums, target)
print("Indices of two numbers:", result)
