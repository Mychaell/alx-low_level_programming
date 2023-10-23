#include "lists.h"

/**
 * sum_listint - func to calculate the sum of all the data in the  list
 * @head: first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
