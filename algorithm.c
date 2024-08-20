/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkawaguc <nkawaguc@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:56:35 by nkawaguc          #+#    #+#             */
/*   Updated: 2024/08/20 19:24:37 by nkawaguc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*lower_bound(int *begin, int *end, int value)
{
	int	*left;
	int	*right;
	int	*mid;

	if (!begin || !end || end - begin <= 0)
		return ((void *)0);
	*left = begin - 1;
	*right = end;
	while (right - left > 1)
	{
		*mid = left + (right - left) / 2;
		if (value <= *mid)
			right = mid;
		else
			left = mid;
	}
	return (right);
}

int	*upper_bound(int *begin, int *end, int value)
{
	int	*left;
	int	*right;
	int	*mid;

	if (!begin || !end || end - begin <= 0)
		return ((void *)0);
	*left = begin - 1;
	*right = end;
	while (right - left > 1)
	{
		*mid = left + (right - left) / 2;
		if (value < *mid)
			right = mid;
		else
			left = mid;
	}
	return (right);
}

int	*binary_search(int *begin, int *end, int value)
{
	int	*left;
	int	*right;
	int	*mid;

	if (!begin || !end || end - begin <= 0)
		return ((void *)0);
	*left = begin - 1;
	*right = end;
	while (right - left > 1)
	{
		*mid = left + (right - left) / 2;
		if (value == *mid)
			return (mid);
		if (value < *mid)
			right = mid;
		else
			left = mid;
	}
	return ((void *)0);
}
