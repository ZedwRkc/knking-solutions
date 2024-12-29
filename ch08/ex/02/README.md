 ### Exercise 8.02

 The Q&A section shows how to use a `letter` as an array subscript. Describe how to use a `digit` (in character form) as a subscript.

 ### solution

 To use a digit d (in character form) as a subscript into the array a, we would write a[d-'0']. This assumes that digits have consecutive codes in the underlying character set, which is true of ASCII and other popular character sets.