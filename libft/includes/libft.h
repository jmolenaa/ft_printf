/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jmolenaa <jmolenaa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 09:29:59 by jmolenaa      #+#    #+#                 */
/*   Updated: 2023/07/17 09:27:14 by jmolenaa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**
 * Identifies if character is alphabetic
 * Returns 1 if yes, 0 if not
*/
int			ft_isalpha(int c);

/**
 * Identifies if character is a number
 * Returns 1 if yes, 0 if not
*/
int			ft_isdigit(int c);

/**
 * Identifies if character is alphanumeric
 * Returns 1 if yes, 0 if not
*/
int			ft_isalnum(int c);

/**
 * Identifies if character belogns ot the ascii set
 * Returns 1 if yes, 0 if not
*/
int			ft_isascii(int c);

/**
 * Identifies if character is printable
 * Returns 1 if yes, 0 if not
*/
int			ft_isprint(int c);

/**
 * Takes the given string and converts it to an integer
*/
int			ft_atoi(const char *str);

/**
 * Locates the first occurence of the given character in the given string
 * Returns a pointer to the located character or NULL if it doesnt appear
*/
char		*ft_strchr(const char *s, int c);

/**
 * Locates the last occurence of the given character in the given string
 * Returns a pointer to the located character or NULL if it doesnt appear
*/
char		*ft_strrchr(const char *s, int c);

/**
 * Takes a string and returns it's length
*/
size_t		ft_strlen(const char *s);

/**
 * Compares the two given strings according to ascii value.
 * Stops when strings differ, both strings end or 'n' characters were compared
 * Returns an integer greater, equal or less than 0 according as
 * 's1' is greater than, equal to, or less than 's2'
*/
int			ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * Locates the first occurence of str 'needle' in str 'haystack'
 * Not more than 'len' characters are compared
 * Returns NULL if 'needle' isn't present
 * Returns a pointer to the first character of 'needle' in 'haystack'
*/
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * Applies the function 'f' on each character of the string passed as argument
*/
void		ft_striteri(char *s, void (*f)(unsigned int, char *));

/**
 * Appends 'src' to the end of 'dst'
 * Appends at most 'dstsize' - lenght of 'dst' - 1 characters
 * It then NUL terminates the resultign str
 * It returns the lenght of 'dst' plus the length of 'src'
*/
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * Copies 'src' into 'dst'
 * Copies up to 'dstsize' - 1 characters then NUL terminates
 * Returns the length of 'src
*/
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * Converts a lower-case letter to a uper-case letter
 * Returns the uper-case letter or the argument if it remained unchanged
*/
int			ft_toupper(int c);

/**
 * Converts an upper-case letter to a lower-case letter
 * Returns the lower-case letter or the argument if it remained unchanged
*/
int			ft_tolower(int c);

/**
 * Allocates 'count' * 'size' memory and sets the bytes to zero
\ * Returns a pointer to the allocated memory or NULL on malloc failure
*/
void		*ft_calloc(size_t count, size_t size);

/**
 * Converts the given integer to a string
 * Returns an allocated string or NULL on malloc failure
*/
char		*ft_itoa(int n);

/**
 * Creates an array of strings resulting from splitting 's' on the char 'c'
 * The array and the pointers are allocate
 * Returns the array or NULL on malloc failure
*/
char		**ft_split(char const *s, char c);

/**
 * Creates a copy of string 's1'
 * Returns a pointer to the copied string or NULL on malloc failure
*/
char		*ft_strdup(const char *s1);

/**
 * Creates a new string resulting from concatenation of 's1' and 's2'
 * Returns a pointer to the new string or NULL on malloc failure
*/
char		*ft_strjoin(char const *s1, char const *s2);

/**
 * Creates a new string and fills it with the results of the
 * application of function 'f' on each character of string 's'
 * Returns a pointer to the new string or NULL on malloc failure
*/
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * Creates a string resulting from the removal of the characters specified
 * in 'set' from the the string 's'
 * Returns a pointer to the new string or NULL on malloc failure
*/
char		*ft_strtrim(char const *s1, char const *set);

/**
 * Creates a new substring from 's'
 * The string starts at index 'start' and is of maximum size 'len'
 * Returns a pointer to the new string or NULL on malloc failure
*/
char		*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * Writes 'n' zero bytes to the memory pointed to by 's'
*/
void		ft_bzero(void *s, size_t n);

/**
 * Locates the first occurrence the byte 'c' in the memory pointed to by 's'
 * It will compare the memory for 'n' bytes
 * Returns a pointer to the located byte ot NULL if it doesn't exist
*/
void		*ft_memchr(const void *s, int c, size_t n);

/**
 * Compares the memory pointed to by 's1' and 's2'
 * Stops when memory differs or when 'n' bytes are compared
 * Returns an integer greater, equal or less than 0 according as
 * 's1' is greater than, equal to, or less than 's2'
*/
int			ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * Copies 'n' bytes from memory 'src' to 'dst'
 * Memory overlap is undefined
 * Returns the original value of 'dst'
*/
void		*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * Copies 'n' bytes from memory 'src' to 'dst'
 * The memory may overlap
 * Returns the original value of 'dst'
*/
void		*ft_memmove(void *dst, const void *src, size_t len);

/**
 * Writes 'len' bytes of value 'c' to the memory pointed to by 'b'
 * Returns the pointer 'b'
*/
void		*ft_memset(void *b, int c, size_t len);

/**
 * Writes character 'c' to the given file descriptor
*/
void		ft_putchar_fd(char c, int fd);

/**
 * Writes string 's' to the given file descriptor
*/
void		ft_putstr_fd(char *s, int fd);

/**
 * Writes string 's' followed by a newline to the given file descriptor
*/
void		ft_putendl_fd(char *s, int fd);

/**
 * Writes the integer 'n' to the given file descriptor
*/
void		ft_putnbr_fd(int n, int fd);

/**
 * Creates a new t_list node and sets its member 'content' to the argument
 * Returns a pointer to the new node or NULL on malloc failure
*/
t_list		*ft_lstnew(void *content);

/**
 * Counts the number of nodes in the list
 * Returns the number of nodes
*/
int			ft_lstsize(t_list *lst);

/**
 * Adds the node 'new' at the beginning of the list
*/
void		ft_lstadd_front(t_list **lst, t_list *new_node);

/**
 * Adds the node 'new' at the end of the list
*/
void		ft_lstadd_back(t_list **lst, t_list *new_node);

/**
 * Returns the lst node in the list
*/
t_list		*ft_lstlast(t_list *lst);

/**
 * Frees the content of the node using the function 'f'
 * Frees the given node
*/
void		ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * Frees the given node, it's content using 'f' and all the succesive nodes
 * Sets the pointer to the first node to NULL
*/
void		ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * Iterates through the list and applies the function 'f' to every node
*/
void		ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * Creates a new list and fills it with the result of
 * the function 'f' applied to the content of every node
 * Returns a pointer to the new list or NULL on malloc failure
*/
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif