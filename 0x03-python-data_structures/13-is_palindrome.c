#include "lists.h"
#include <stddef.h> /* Include for NULL */

/**
 * is_palindrome_recursive - recursively checks if a linked list is a palindrome
 * @left: pointer to the left node
 * @right: pointer to the right node
 *
 * Return: 1 if it is a palindrome, 0 otherwise
 */
int is_palindrome_recursive(listint_t **left, listint_t *right)
{
	if (right == NULL)
		return (1);

	int is_palindrome = is_palindrome_recursive(left, right->next);

	if (is_palindrome == 0)
		return (0);

	if ((*left)->n != right->n)
		return (0);

	*left = (*left)->next;

	return (1);
}

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to the head of the linked list
 *
 * Return: 1 if it is a palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (1);

	return (is_palindrome_recursive(head, *head));
}
