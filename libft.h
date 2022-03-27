/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 13:12:25 by agaliste          #+#    #+#             */
/*   Updated: 2022/03/27 01:45:12 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# define BUFFER_SIZE 1

/**
 * Linked list template function to be used with alongside Libft list functions.
 * 
 * @param content void pointer to the content of the node
 * @param next struct s_list pointer to the next node
 * 
 * @author agaliste (somedevv)
 */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**
 * Makes a character lowercase.
 * 
 * @param c Character to make lowercase
 * @return int 
 * @retval Lowercase equivalent if a lowercase representation exists
 *
 * @author agaliste (somedevv)
 */
int					ft_tolower(int c);

/**
 * Makes a character uppercase.
 * 
 * @param c Character to make uppercase
 * @return int 
 * @retval Uppercase equivalent if an uppercase representation exists
 *
 * @author agaliste (somedevv)
 */
int					ft_toupper(int c);

/**
 * Test whether c is a ASCII character code.
 * 
 * @param c Character to check
 * @return int 
 * @retval Non-zero if is an ASCII character code between 0 and octal 0177
 *         inclusive
 * @retval 0 otherwise
 *
 * @author agaliste (somedevv)
 */
int					ft_isascii(int c);

/**
 * Test whether c is a character of class alpha or digit.
 * 
 * @param c  Character to check
 * @return int 
 * @retval Non-zero if is an alphanumeric character
 * @retval 0 otherwise
 *
 * @author agaliste (somedevv)
 */
int					ft_isalnum(int c);

/**
 * Test whether c is a character of class print.
 * 
 * @param c Character to check 
 * @return int 
 * @retval Non-zero if is a character of class print
 * @retval 0 otherwise
 *
 * @author agaliste (somedevv)
 */
int					ft_isprint(int c);

/**
 * Checks c for a digit (0 through 9).
 * 
 * @param c Character to check 
 * @return int 
 * @retval Non-zero if is a digit character
 * @retval 0 otherwise
 *
 * @author agaliste (somedevv)
 */
int					ft_isdigit(int c);

/**
 * Checks c for an alphabetic character.
 * 
 * @param c Character to check 
 * @return int 
 * @retval Non-zero if the character is a alphabetic character
 * @retval 0 otherwise
 *
 * @author agaliste (somedevv)
 */
int					ft_isalpha(int c);

/**
 * Converts n to its string representation.
 * 
 * @param n Number (int) to convert to string
 * @return char* 
 * @retval string representation of the converted number
 *
 * @author agaliste (somedevv)
 */
char				*ft_itoa(int n);

/**
 * Converts the initial portion of the string pointed to by nptr to its int
 * representation.
 * 
 * @param str Pointer to string to convert
 * @return int 
 * @retval int representation of the converted number
 *
 * @author agaliste (somedevv)
 */
int					ft_atoi(const char *str);

/**
 * Converts the initial portion of the string pointed to by nptr to its long
 * representation.
 * 
 * @param s Pointer to string to convert
 * @return long
 * @retval long representation of the converted number
 * @retval NULL if the conversion fails.
 *
 * @author agaliste (somedevv)
 */
long				ft_atoli(const char *s);

/**
 * Returns a line from the passed file descriptor.
 * 
 * @attention To get all the lines of a file the function must be called on a
 *            loop.
 * 
 * @param fd The file descriptor of the file you want to read
 * @return char*
 * @retval The line as a string
 * @retval NULL if there aren't any more lines or it fails to read
 *
 * @author agaliste (somedevv)
 */
char				*ft_gnl(int fd);

/**
 * Write the character c over to the file descriptor.
 * 
 * @param c The character to be written
 * @param fd The file descriptor on which to write
 *
 * @author agaliste (somedevv)
 */
void				ft_putchar_fd(char c, int fd);

/**
 * Write the string pointed to by s over to the file descriptor.
 * 
 * @param s Ponter to the string to write
 * @param fd The file descriptor on which to write
 *
 * @author agaliste (somedevv)
 */
void				ft_putstr_fd(char *s, int fd);

/**
 * Write the string pointed to by s over to the file descriptor, followed by a
 * line break.
 * 
 * @param s Ponter to the string to write
 * @param fd The file descriptor on which to write
 *
 * @author agaliste (somedevv)
 */
void				ft_putendl_fd(char *s, int fd);

/**
 * Write the int n over to the file descriptor.
 * 
 * @param n int to write
 * @param fd The file descriptor on which to write
 *
 * @author agaliste (somedevv)
 */
void				ft_putnbr_fd(int n, int fd);

/**
 * Create a struct s_list node.
 * 
 * @param content The content of the new list node
 * @return t_list* 
 * @retval The new node
 *
 * @author agaliste (somedevv)
 */
t_list				*ft_lstnew(void *content);

/**
 * Add the node new to the beginning of the list alst.
 * 
 * @param alst Reference to the first node of the list 
 * @param new The node to add
 *
 * @author agaliste (somedevv)
 */
void				ft_lstadd_front(t_list **alst, t_list *new);

/**
 * Counts the number of nodes in the list lst.
 * 
 * @param lst The list to count
 * @return int 
 * @retval The number of nodes in lst
 *
 * @author agaliste (somedevv)
 */
int					ft_lstsize(t_list *lst);

/**
 * Returns a pointer to the last node of the list lst.
 * 
 * @param lst The list
 * @return t_list*
 * @retval Pointer to the last node of lst
 *
 * @author agaliste (somedevv)
 */
t_list				*ft_lstlast(t_list *lst);

/**
 * Add the node new to the end of the list lst.
 * 
 * @param lst Reference to the list
 * @param new The node to add
 *
 * @author agaliste (somedevv)
 */
void				ft_lstadd_back(t_list **lst, t_list *new);

/**
 * Deletes the list lst applying the function del.
 * 
 * @param lst Node to delete
 * @param del Pointer to the function to use
 *
 * @author agaliste (somedevv)
 */
void				ft_lstdelone(t_list *lst, void (*del)(void*));

/**
 * Deletes the list lst and all its subsequent nodes applying the function del.
 * 
 * @param lst Reference to the first node of the list
 * @param del Pointer to the function to use
 *
 * @author agaliste (somedevv)
 */
void				ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * Iterate trough the list lst applying the function f.
 * 
 * @param lst List to iterate
 * @param f Pointer to the function to apply
 *
 * @author agaliste (somedevv)
 */
void				ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * Perform an iteration on the list lst and apply the function f to the content
 * of each node. Creates a new list resulting from the applications
 * successive of f. Then use the function del to remove the content of some
 * node.
 * 
 * @param lst List to iterate
 * @param f Pointer to the function to apply
 * @param del Pointer to the function to apply
 * @return t_list* 
 *
 * @author agaliste (somedevv)
 */
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

/**
 * Deletes the last element of the list lst.
 * 
 * @param lst List
 *
 * @author agaliste (somedevv)
 */
void				ft_lstdel_last(t_list *lst);

/**
 * Fills the first len bytes of s with the constant byte c.
 * 
 * @param b Pointer to the string to fill
 * @param c Character used to fill
 * @param len Number of bytes to fill
 * @return void* 
 * @retval Pointer to the memory area s
 *
 * @author agaliste (somedevv)
 */
void				*ft_memset(void *b, int c, size_t len);

/**
 * Copies n bytes from memory area src to memory area dst. The memory areas
 * don't overlap.
 * 
 * @param dst Pointer to the string of destination of the copy
 * @param src Pointer to the string to copy from
 * @param n Number of bytes to copy
 * @return void* 
 * @retval Pointer to dst
 *
 * @author agaliste (somedevv)
 */
void				*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * Copies no more than n bytes from src to dst, stopping when the character c 
 * is found. They can overlap with an undefined result.
 * 
 * @param dst Pointer to the string of destination of the copy
 * @param src Pointer to the string to copy from
 * @param c Character to stop on
 * @param n Number of bytes to copy
 * @return void* 
 * @retval Pointer to the next character in dst after c
 * @retval NULL if c was not found in the first n characters of src.
 *
 * @author agaliste (somedevv)
 */
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);

/**
 * Copies len bytes from src to dst. They may overlap.
 * 
 * @param dst Pointer to the string of destination of the copy
 * @param src Pointer to the string to copy from
 * @param len Number of bytes to copy
 * @return void* 
 *
 * @author agaliste (somedevv)
 */
void				*ft_memmove(void *dst, const void *src, size_t len);

/**
 * Scans the initial n bytes of s for the first instance of c. Both c and the
 * bytes of s are interpreted as unsigned char.
 * 
 * @param s Pointer to the string to search in
 * @param c Character to find
 * @param n Number of maximum bytes to search
 * @return void* 
 * @retval Pointer to the matching byte
 * @retval NULL if the character does not occur in the given memory area
 *
 * @author agaliste (somedevv)
 */
void				*ft_memchr(const void *s, int c, size_t n);

/**
 * Compares the first n bytes (each interpreted as unsigned char) of s1 and s2.
 * 
 * @param s1 Pointer to the string to compare from
 * @param s2 Pointer to the string to compare to the first one
 * @param n Number of bytes to compare
 * @return int 
 * @retval An int less than, equal to, or greater than zero if the first n bytes
 *         of s1 is found, respectively, to be less than, to match, or be
 *         greater than the first n bytes of s2
 * @retval 0 if n is zero
 *
 * @author agaliste (somedevv)
 */
int					ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * Allocate unused space for an array of count elements each of whose size in
 * bytes is size. Space is initialized to all bits 0.
 * 
 * @param count Size of the string
 * @param size  Size of the malloc
 * @return void* 
 * @retval Pointer to the allocated space upon successful completion with both
 *         count and size non-zero
 * @retval NULL pointer or pointer to the allocated space if either count or
 *         size is 0
 *
 * @author agaliste (somedevv)
 */
void				*ft_calloc(size_t count, size_t size);

/**
 * Erases the data in the n bytes of the memory starting at the location pointed
 * to by s, by writing zeros to that area.
 * 
 * @param sr Pointer to the string to fill
 * @param n Number of bytes to fill
 *
 * @author agaliste (somedevv)
 */
void				ft_bzero(void *sr, size_t n);

/**
 * Changes the size of the memory block pointed to by ptr to size bytes. The
 * contents will be unchanged in the range from the start of the region up to
 * the minimum of the old and new sizes. If the new size is larger than the old
 * size, the added memory will not be initialized.
 * 
 * @param ptr Pointer to the region of memory to realloc
 * @param size Size of the realloc
 * @return void* 
 * @retval Pointer to the newly allocated memory if successful
 * @retval NULL if the request fails
 *
 * @author agaliste (somedevv)
 */
void				*ft_realloc(void *ptr, size_t size);

/**
 * Free the memory allocated in a matrix.
 * 
 * @param str Matrix to free
 *
 * @author agaliste (somedevv)
 */
void				ft_free_matrix(char **str);

/**
 * Finds the first ocurrence of n in s.
 * 
 * @param s String to search in
 * @param n Character to find
 * @return char* 
 * @retval Pointer to the matched character n in s
 * @retval Pointer to the terminator if n is specified as '\0'
 * @retval NULL if the character is not found
 *
 * @author agaliste (somedevv)
 */
char				*ft_strchr(const char *s, int n);

/**
 * Finds the last ocurrence of n in s.
 * 
 * @param s String to search in
 * @param n Character to find
 * @return char* 
 * @retval Pointer to the matched character n in s
 * @retval Pointer to the terminator if n is specified as '\0'
 * @retval NULL if the character is not found
 *
 * @author agaliste (somedevv)
 */
char				*ft_strrchr(const char *s, int n);

/**
 * Duplicates s1.
 * 
 * @param s1 String to duplicate
 * @return char* 
 * @retval Pointer to the duplicated string
 * @retval NULL if insufficient memory was available
 *
 * @author agaliste (somedevv)
 */
char				*ft_strdup(const char *s1);

/**
 * Copy and concatenate strings. Appends the NULL-terminated string src to the
 * end of dst. It will append at most size - (strlen(dst) - 1), NULL-terminating
 * the result.
 * 
 * @param dst Destination of the copy
 * @param src String to copy from
 * @param size Number of bytes to copy
 * @return size_t
 * @retval Total length of the string created
 *
 * @author agaliste (somedevv)
 */
size_t				ft_strlcat(char *dst, const char *src, size_t size);

/**
 * Copies src, including the terminating null byte ('\0'), to dest. The strings
 * don't overlap.
 * 
 * @param dst Destination of the copy
 * @param src String to copy from
 * @param dstsize Size of dst
 * @return size_t 
 * @retval Total length of the string created
 *
 * @author agaliste (somedevv)
 */
size_t				ft_strlcpy(char *dst, char *src, size_t dstsize);

/**
 * Calculates the length of s, excluding the terminating null byte ('\0').
 * 
 * @param str String to get the length of
 * @return size_t 
 * @retval The number of bytes in s
 *
 * @author agaliste (somedevv)
 */
size_t				ft_strlen(const char *str);

/**
 * Compares not more than n characters in the NULL terminated strings s1 and
 * s2. Characters that appear after a NULL character are not compared.
 * 
 * @param s1 String to compare
 * @param s2 String to compare
 * @param n Number of bytes to compare
 * @return int 
 * @retval int greater than, equal to, or less than 0, according as the string
 *         s1 is greater than, equal to, or less than the string s2.
 *
 * @author agaliste (somedevv)
 */
int					ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * Compares s1 and s2.
 * 
 * @param s1 String to compare
 * @param s2 String to compare
 * @return int 
 * @retval int greater than, equal to, or less than 0, according as the string
 *         s1 is greater than, equal to, or less than the string s2.
 *
 * @author agaliste (somedevv)
 */
int					ft_strcmp(const char *s1, const char *s2);

/**
 * Locates the first occurrence of the null-terminated string little in the
 * string big, where not more than len characters are searched.  Characters that
 * appear after a `\0' character are not searched.
 * 
 * @param hstck String to search in
 * @param ndl String to search
 * @param len Number of maximum bytes to search
 * @return char* 
 * @retval hstck if ndl is empty
 * @retval Pointer to the first occurrence of ndl in hstck if there is an
 *         occurrence
 * @retval NULL if ndl doesn't occour in hstck
 *
 * @author agaliste (somedevv)
 */
char				*ft_strnstr(const char *hstck, const char *ndl, size_t len);

/**
 * Concatenate s1 and s2.
 * 
 * @param s1 Prefix string
 * @param s2 Suffix string
 * @return char* 
 * @retval Pointer to the new string if successful
 * @retval NULL if the memory reserve fails
 *
 * @author agaliste (somedevv)
 */
char				*ft_strjoin(const char *s1, const char *s2);

/**
 * Returns the substring of the given string at the given start position with
 * the given length (or smaller if the length of the original string is less
 * than start + length, or length is bigger than MAXSTRINGLEN).
 * 
 * @param s The string to take a substring from
 * @param start Starting position of the extracted string
 * @param len Length of string to return
 * @return char*
 * @retval Pointer to the new string created
 * @retval NULL if the memory reserve fails
 *
 * @author agaliste (somedevv)
 */
char				*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * Return a copy of the string s1, without the characters indicated in set at
 * the beginning and at the end of the string.
 * 
 * @param s1 The character string to trim
 * @param set The string reference set to be removed
 * @return char* 
 * @retval Pointer to the new trimmed string
 * @retval NULL if the memory reserve fails
 *
 * @author agaliste (somedevv)
 */
char				*ft_strtrim(char const *s1, char const *set);

/**
 * Apply the function f to each character of s to create a new string that
 * results of the successive applications of f.
 * 
 * @param s The string to iterate over 
 * @param f Pointer to the function to be applied
 * @return char* 
 * @retval Pointer to the string resulting from the successive applications of f
 * @retval NULL if the memory reserve fails
 *
 * @author agaliste (somedevv)
 */
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * Create a string matrix obtained by separating s with the character c. The
 * matrix must be NULL-terminated.
 * 
 * @param s The string to chop up
 * @param c The delimiting character
 * @return char** 
 * @retval Pointer to the matrix created
 * @retval NULL if memory reserve fails
 *
 * @author agaliste (somedevv)
 */
char				**ft_split(char const *s, char c);

#endif
