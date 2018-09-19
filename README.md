# libft
Personal C Library

### Functions

| Function Name | Prototype     | Utility  |
| ------------- |---------------| -------- |
| ft_memset     | void \*ft_memset(void \*b, int c, size_t len)| Writes len bytes of value c (converted to an unsigned char) to the string b. Returns its first argument. |
| ft_bzero      | void ft_bzero(void \*s, size_t n)| Writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing. |
| ft_memcpy     | void \*ft_memcpy(void \*dst, const void \*src, size_t n) | Copies n bytes from memory area src to memory area dst. If dst and src overlap, behavior is undefined.  Applications in which dst and src might overlap should use memmove(3) instead. Returns the original value of dst.|
| ft_memccpy    | void \*ft_memccpy(void \*dst, const void \*src, int c, size_t n)| Copies bytes from string src to string dst.  If the character c (as converted to an unsigned char) occurs in the string src, the copy stops and a pointer to the byte after the copy of c in the string dst is returned.  Otherwise, n bytes are copied, and a NULL pointer is returned. |
| ft_memmove    | void \*ft_memmove(void \*dst, const void \*src, size_t len)| Copies byte string fron src to dst. The two strings may overlap; the copy is always done in a non-destructive manner. Returns the original value of dst. |
| ft_memchr     | void \*ft_memchr(const void \*s, int c, size_t n)| Locates the first occurrence of c (converted to an unsigned char) in string s. Returns a pointer to the byte located, or NULL if no such byte exists within n bytes. |
| ft_memcmp     | int ft_memcmp(const void \*s1, const void \*s2, size_t n) | Compares byte string s1 against byte string s2. Function returns zero if the two strings are identical, otherwise returns the difference between the first two differing bytes. |
| ft_strlen     | size_t ft_strlen(const char \*s) | Counts length of the string |
| ft_strdup     | char \*ft_strdup(const char \*s1) | Allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it. The pointer may subsequently be used as an argument to the function free(3). |
| ft_strcpy     | char \*ft_strcpy(char \*dst, const char \*src) | Copies src to dest and terminates with '\0'  |
| ft_strncpy    | char \*ft_strncpy(char \*dst, const char \*src, size_t len) | Almost the same as strcpy (copy src to dest and terminates with '\0' most n characters. If src is less than len characters long, the remainder of dst is filled with '\0' characters. |
| ft_strcat     | char \*ft_strcat(char \*s1, const char \*s2) | Appends a copy of the null-terminated string s2 to the end of the null-terminated string s1, then add a terminating '\0'. The string s1 must have sufficient space to hold the result. |
| ft_strncat    | char \*ft_strncat(char \*s1, const char \*s2, size_t n) | Appends a copy of the null-terminated string s2 to the end of the null-terminated string s1. The strncat() function appends not more than n characters from s2, and then adds a terminating '\0'. |
| ft_strlcat    | size_t ft_strlcat(char \*dst, const char \*src, size_t size)| Appends the NUL-terminated str src to the end of dst. Takes the full size of the buffer (not just the length) and guarantee to NUL-terminate the result as long as there is at least one byte free in dst. A byte for the NULL should be included in size. For strlcat() both src and dst must be NULL-terminated. It will append at most size - strlen(dst) - 1 bytes,NULL-terminating the result. The source and destination strings should not overlap, as the behavior is undefined. Returns the total length of the string it tried to create. |
| ft_strchr     | char \*ft_strchr(const char \*s, int c) | The function locates the first occurrence of c (converted to a char) in the string pointed to by s. If c is '\0', func returns a pointer to the end of the string. If locates c, func returns pointer to the located character. If the character does not appear in the string - return NULL. |
| ft_strrchr    | char \*ft_strrchr(const char \*s, int c) | Similar to strchr, this function locates the LAST occurrence of c (converted to a char) in the string pointed to by s. |
| ft_strstr     | char \*ft_strstr(const char \*big, const char \*little) | Takes as a parameter the adress of a pointer to a link and frees the memory of this link and every successors of that link using the functions del and free(3). Finally the pointer to the link that was just freed must be set to NULL (quite similar to the function ft_memdel from the mandatory part). |
| ft_strnstr    | char \*ft_strnstr(const char \*big, const char \*little, size_t len) | Finds whether there is a substring in a string. |
| ft_strcmp     | int ft_strcmp(const char \*s1, const char \*s2) | Compares strings. Return an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than s2. |
| ft_strncmp    | int ft_strncmp(const char \*s1, const char \*s2, size_t n) | Same as previous, compares first and second char while n |
| ft_atoi       | int ft_atoi(const char \*str) | Converts a to int |
| ft_isalpha    | int ft_isalpha(int c) | Checks whether is alphabetical character |
| ft_isdigit    | int ft_isdigit(int c) | Checks whether is digit |
| ft_isalnum    | int ft_isalnum(int c) | Checks whether it is an alpha or a digit |
| ft_isascii    | int ft_isascii(int c) | Checks whether it is from ascii table |
| ft_isprint    | int ft_isprint(int c) | Checks whether it is printable |
| ft_toupper    | int ft_toupper(int c) | Turns i to upper case |
| ft_tolower    | int ft_tolower(int c) | Turns i to lower case |

### Additional Functions

| Function Name | Prototype     | Utility  |
| ------------- |---------------| ---------|
| ft_memalloc   | void \*ft_memalloc(size_t size) | Allocates (with malloc) and returns a “fresh” memory area (no need to reserve memory for '\0'. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL (protection).(Replicates malloc + bzero) |
| ft_memdel     | void ft_memdel(void \*\*ap)     | Frees memory and puts the pointer to NULL |
| ft_strnew     | char \*ft_strnew(size_t size)   | Returns a 'fresh' null-terminated string with zeroed characters|
| ft_strdel     | void ft_strdel(char \*\*as)     | ft_memdel() variant for strings - Takes as a parameter the address of a string that need to be freed with free, then sets its pointer to NULL. |
| ft_strclr     | void ft_strclr(char \*s)        | Sets every character of the string to the value ’\0’|
| ft_striter    | void ft_striter(char \*s, void (\*f)(char \*)) | Applies f() to each character in as string|
| ft_striteri   | void ft_striteri(char \*s, void (\*f)(unsigned int, char \*)) |ft_striter() variant|
| ft_strmap     | char \*ft_strmap(char const \*s, char (\*f)(char)) |Applies f() to each character of a new string|
| ft_strmapi    | char \*ft_strmapi(char const \*s, char (\*f)(unsigned int, char)) |ft_strmap() variant|
| ft_strequ     | int ft_strequ(char const \*s1, char const \*s2) |Lexicographical comparison between 2 strings|
| ft_strnequ    | int ft_strnequ(char const \*s1, char const \*s2, size_t n) |ft_strequ() up to 'n' characters|
| ft_strsub     | char \*ft_strsub(char const \*s, unsigned int start, size_t len) |Returns a 'fresh' sub-string|
| ft_strjoin    | char \*ft_strjoin(char const \*s1, char const \*s2) |Returns a 'fresh' concatenated string|
| ft_strtrim    | char \*ft_strtrim(char const \*s) |Returns a 'fresh' string without whitespaces at the beginning and at the end|
| ft_strsplit   | char \*\*ft_strsplit(char const \*s, char c) |Returns a 'fresh' array of strings, made from the split of a string|
| ft_itoa       | char \*ft_itoa(int n) |Returns a 'fresh' string that represents an int value|
| ft_putchar    | void ft_putchar(char c) |Writes a character to stdout|
| ft_putstr     | void ft_putstr(char const \*s) |Writes a string to stdout|
| ft_putendl    | void ft_putendl(char const \*s) |Writes a string followed by a newline to stdout|
| ft_putnbr     | void ft_putnbr(int n) |Writes an int to the stdout|
| ft_putchar_fd | void ft_putchar_fd(char c, int fd) |Writes an int to the file descriptor|
| ft_putstr_fd  | void ft_putstr_fd(char const \*s, int fd) |Writes a string to the file descriptor |
| ft_putendl_fd | void ft_putendl_fd(char const \*s, int fd) |Writes a string followed by a newline to the file descriptor|
| ft_putnbr_fd  | void ft_putnbr_fd(int n, int fd) |Writes a character to the file descriptor|


### Bonus Functions

The following functions are for list manipulation. To use them properly, you must use the following structure to represent linked lists:

```C
typedef struct  s_list
{
  void          *content;           /* Data contained in the link (of any type) */
  size_t        content_size;       /* The size of the data stored */
  struct s_list *next;              /* Next link address or NULL */
}               t_list;
```

| Function Name | Prototype     | Utility  |
| ------------- |---------------| ---------|
| ft_lstnew     | t_list \*ft_lstnew(void const \*content, size_t content_size) |Returns a 'fresh' link|
| ft_lstdelone  | void ft_lstdelone(t_list \*\*alst, void (\*del)(void \*, size_t)) |Frees 1 link and sets its pointer to NULL|
| ft_lstdel     | void ft_lstdel(t_list \*\*alst, void (\*del)(void \*, size_t)) |Frees 1 link and every successor of it|
| ft_lstadd     | void ft_lstadd(t_list \*\*alst, t_list \*new) |Adds the element 'new' to the beginning of the list|
| ft_lstiter    | void ft_lstiter(t_list \*lst, void (\*f)(t_list \*elem)) |Iterates a list and applies f() to each node|
| ft_lstmap     | t_list \*ft_lstmap(t_list \*lst, t_list \*(\*f)(t_list \*elem)) |Iterates a list and applies f() to each node to create a new list|

### Extra functions
Functions I found useful:


| Function Name | Prototype     | Utility  |
| ------------- |---------------| ---------|
| ft_isdelim.c | int ft_isdelim(char c) | Check char for space, new line, tab, vertical tab, carriage return, form feed |
| ft_isdigit_char.c | int ft_isdigit_char(char c) | Check if char is to be digit |
| ft_numlen.c | size_t ft_numlen(int n) | Counts length of the number given |
| ft_strrev.c | char *ft_strrev(char *str) | Reverse the string without allocating memory |
| ft_arrnew.c | char **ft_arrnew(size_t y, size_t x) | Allocates memory for a two-dimensional array (x, y)|
| ft_arrdel.c | void ft_arrdel(char ***arr) | Frees a two-dimensional array |

### Get next line

| Function Name | Prototype     | Utility  |
| ------------- |---------------| ---------|
| get_next_line.c | int get_next_line(const int fd, char **line)| gets each new line from file/stdi |

### MD Credit: Matt Hurd
