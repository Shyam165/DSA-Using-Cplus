# def are_anagrams(str1, str2):
#     # Remove any white spaces and convert strings to lowercase
#     str1 = str1.replace(" ", "").lower()
#     str2 = str2.replace(" ", "").lower()
    
#     # Check if the sorted characters of both strings are the same
#     return sorted(str1) == sorted(str2)

# # Test the function
# str1 = "listen"
# str2 = "silent"

# if are_anagrams(str1, str2):
#     print(f'"{str1}" and "{str2}" are anagrams.')
# else:
#     print(f'"{str1}" and "{str2}" are not anagrams.')






#Method2-------------------------

def are_anagrams(str1, str2):
    # Remove any white spaces and convert strings to lowercase
    str1 = str1.replace(" ", "").lower()
    str2 = str2.replace(" ", "").lower()
    
    # If lengths of the strings are not the same, they can't be anagrams
    if len(str1) != len(str2):
        return False

    # Create a dictionary to count the frequency of each character
    char_count = {}

    # Count the characters in str1
    for char in str1:
        if char in char_count:
            char_count[char] += 1
        else:
            char_count[char] = 1

    # Decrease the count based on characters in str2
    for char in str2:
        if char in char_count:
            char_count[char] -= 1
        else:
            return False
    
    # Check if all character counts are 0
    for count in char_count.values():
        if count != 0:
            return False

    return True

# Test the function
str1 = "listen"
str2 = "silent"

if are_anagrams(str1, str2):
    print(f'"{str1}" and "{str2}" are anagrams.')
else:
    print(f'"{str1}" and "{str2}" are not anagrams.')
