### Exercise 2.06

Why is it not a good idea for an identifier to contain more than one adjacent underscore (as in current__balance. for example)?

### Solution

1. `Readability` - Multiple underscores can make identifiers harder to read and interpret. It’s easy for the eyes to skip over or miscount underscores, making it more challenging to distinguish between similarly named variables  

2. `Conventions and Portability` - In C and C++ standards, identifiers with multiple leading underscores or an underscore followed by a capital letter are reserved for use by the compiler and standard libraries. Overusing underscores, especially if used at the beginning or in unconventional patterns, risks creating naming conflicts with system or library identifiers in some environments, which can lead to undefined behavior or compilation issues.

3. `consistency` -  Most coding standards recommend using single underscores (if any) in identifiers for consistency. A clean, consistent naming convention without excessive underscores improves code readability and maintainability.