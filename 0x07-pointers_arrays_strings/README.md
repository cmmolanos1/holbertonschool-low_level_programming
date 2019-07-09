# 0x07. C - Even more pointers, arrays and strings
Following practicing with pointers and arrays. This repo contains the next files:
* **0-memset.c:**  fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`. Returns a pointer to the memory area `s`.
* **1-memcpy.c:**  copies `n` bytes from memory area `src` to memory area `dest`. Returns a pointer to `dest`.
* **2-strchr.c:** returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found.
* **3-strspn.c:** returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`.
* **4-strpbrk.c:** locates the first occurrence in the string `s` of any of the bytes in the string `accept`. Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found.
* **5-strstr.c:** finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes `(\0)` are not compared. Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.
* **7-print_chessboard.c:** prints the chessboard.
* **8-print_diagsums.c** prints the sum of the two diagonals of a square matrix of integers.
* **9-set_string.c:** sets the value of a pointer to a char.
* **101-crackme_password:** contains crackme2 password.

------------
##### Compilation

To compile the file remember to use `gcc 4.8`or above  by typing:

`gcc -Wall -pedantic -Werror -Wextra <mainfile.c> <function.c> -o <executable file>`