def sortArrayByParityII(nums):
    i, j = 0, 1  # i for even indices, j for odd indices
    n = len(nums)

    while i < n and j < n:
        # Move i forward if it's at the correct parity
        while i < n and nums[i] % 2 == 0:
            i += 2
        # Move j forward if it's at the correct parity
        while j < n and nums[j] % 2 == 1:
            j += 2
        # Swap if i and j have not gone beyond the array length
        print(i, j)
        if i < n and j < n:
            nums[i], nums[j] = nums[j], nums[i]
            i += 2
            j += 2

    return nums


# Test the function
print(sortArrayByParityII([4, 5, 2, 7, 7, 8]))  # Example 1
# print(sortArrayByParityII([2, 3]))      # Example 2
