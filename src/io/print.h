/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthalman <daniel@thalmann.li>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 00:00:00 by dthalman          #+#    #+#             */
/*   Updated: 2024/12/20 00:00:00 by dthalman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H
# include <unistd.h>

void	print(char *string);
void	print_error(char *string);
void	print_int(int val);
void	printlf(void);

#endif
