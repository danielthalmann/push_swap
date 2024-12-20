/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthalman <daniel@thalmann.li>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:03:54 by dthalman          #+#    #+#             */
/*   Updated: 2024/12/17 11:07:11 by dthalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

/**
 * @brief create new empty list
 *
 * @return t_lst*
 */
t_lst	*lst_create()
{
	return lst_new(0);
}

/**
 * @brief Alloue (avec malloc(3)) et renvoie un nouvel élément. la variable
 * content est initialisée à l’aide de la valeur du paramètre content. La
 * variable ’next’ est initialisée à NULL.
 *
 * @param content value of content
 * @return t_list*
 */
t_lst	*lst_new(void *content)
{
	t_lst *list;

	list = malloc(sizeof(t_lst));
	if (list)
	{
		list->next = 0;
		list->previous = 0;
		list->content = content;
		list->c_int = 0;
	}
	return (list);
}

/**
 * @brief Renvoie le dernier élément de la liste
 *
 * @param lst
 * @return t_list*
 */
t_lst	*lst_last(t_lst *lst)
{
	if (!lst)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/**
 * @brief Ajoute l’élément ’new’ au début de la liste.
 *
 * @param lst
 * @param lnew
 */
void	lst_add_front(t_lst **lst, t_lst *lnew)
{
	lnew->previous = 0;
	lnew->next = (*lst);
	if (*lst)
		(*lst)->previous = lnew;
	*lst = lnew;
}

/**
 * @brief Ajoute l’élément lnew à la fin de la liste.
 *
 * @param lst
 * @param lnew
 */
void	lst_add_back(t_lst **lst, t_lst *lnew)
{
	t_lst *llast;

	if (!*lst)
	{
		*lst = lnew;
		lnew->previous = 0;
		lnew->next = 0;
	}
	else
	{
		llast = lst_last(*lst);
		llast->next = lnew;
		lnew->previous = llast;
		lnew->next = 0;
	}
}


/**
 * @brief Libère la mémoire de l’élément passé en argument en utilisant
 * la fonction del puis avec free(3). La mémoire de next ne doit pas être free.
 *
 * @param lst
 * @param del
 */
void	lst_delone(t_lst *lst, void (*del)(void*))
{
	if(del)
	{
		(*del)(lst->content);
	}
	free(lst);
}

/**
 * @brief Supprime et libère la mémoire de l’élément passé en paramètre,
 * et de tous les élements qui suivent, à l’aide de del et de free(3)
 * Enfin, le pointeur initial doit être mis à NULL
 *
 * @param lst
 * @param del
 */
void	lst_clear(t_lst **lst, void (*del)(void*))
{
	t_lst *l;
	t_lst *p;

	if (!lst)
		return;
	l = *lst;
	while (l)
	{
		p = l;
		l = l->next;
		lst_delone(p, del);
	}
	*lst = 0;
}
