# Inbuilt Functions
### ***append():***
- Inserts additional characters at the end of the string (can also be done using ‘+’ or ‘+=’ operator). 
- Its time complexity is O(N) where N is the size of the new string.

### ***assign():*** 
- Assigns new string by replacing the previous value (can also be done using ‘=’ operator).

### ***at():*** 
- Returns the character at a particular position (can also be done using ‘[]’ operator). 
- Its time complexity is O(1).

### ***compare():***
- Compares the value of the string with the string passed in the parameter and returns an integer accordingly. 
- Its time complexity is O(N + M) 
- where N is the size of the first string and M is the size of the second string.
- o/p = -1 that means first string contains letters those ascii values are less than second string
- o/p = 0  that means both strings are same
- o/p = 1  that means first string contains letters those ascii values are greater than second string

### ***clear():***
- Erases all the contents of the string and assign an empty string ("") of length zero. 
- Its time complexity is O(1).

### ***empty():***
- Returns a boolean value, true if the string is empty and false if the string is not empty. 
- Its time complexity is O(1).
### ***erase():***
- Deletes a substring of the string. 
- Its time complexity is O(N) where N is the size of the new string.
### ***find():***
- Searches the string and returns the first occurrence of the parameter in the string. 
- Its time complexity is O(N) where N is the size of the string.
### ***insert():***
- Inserts additional characters into the string at a particular position.
- Its time complexity is O(N) where N is the size of the new string.
### ***length() and size():***
- both are return size of string
- time complexity for both is O(1).
### ***substr():***
- Returns a string which is the copy of the substring. 
- Its time complexity is O(N) where N is the size of the substring.
### ***stoi():***
- Returns the strings converted to int datatype.
### ***to_string():***
- To convert an integer to a string, we use to_string() function.

## Sorting a string:
- To sort a string, we need to include a header file known as <algorithm> 
- Then we can use sort() function that is present in above header file on our string.
### ***Sort():***
- function takes 2 arguments viz. iterator to start of the string and iterator to end of the string.
### ***begin():***
- Returns an iterator pointing to the first character. 
- Its time complexity is O(1)t
### ***end():***
- Returns an iterator pointing to a position which is next to the last character. 
- Its time complexity is O(1).