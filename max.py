
def FindLargestElement(arr,n):
	maxVal = arr[0]

	for i in range(1, n):
		if arr[i] > maxVal:
			maxVal = arr[i]
	return maxVal
n = int(input("Enter the number of elements in the array: "))
arr = []
print("Enter elements of the array: ")
for i in range(n):
  numbers = int(input())
  arr.append(numbers)
maxVal = FindLargestElement(arr,n)
print ("Largest in given array is",maxVal)
