/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okogut <okogut@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 20:11:29 by okogut            #+#    #+#             */
/*   Updated: 2019/01/30 20:11:29 by okogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst == NULL || del == NULL)
		return ;
	if ((*alst)->next == NULL)
	{
		ft_lstdelone(alst, del);
		return ;
	}
	ft_lstdel(&(*alst)->next, del);
	ft_lstdelone(alst, del);
}
