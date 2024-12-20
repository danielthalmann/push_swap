/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthalman <daniel@thalmann.li>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:03:54 by dthalman          #+#    #+#             */
/*   Updated: 2024/12/17 18:53:57 by dthalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_lst
{
	void			*content;
	int				c_int;
	struct s_lst	*next;
	struct s_lst	*previous;
}	t_lst;

t_lst	*lst_create(void);
t_lst	*lst_new(void *content);
t_lst	*lst_last(t_lst *lst);
void	lst_add_back(t_lst **lst, t_lst *lnew);
void	lst_add_front(t_lst **lst, t_lst *lnew);
void	lst_delone(t_lst *lst, void (*del)(void*));
void	lst_clear(t_lst **lst, void (*del)(void*));
#endif
