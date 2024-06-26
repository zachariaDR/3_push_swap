/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_ra_rb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:33:50 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/27 16:33:52 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* rr: rotate a and rotate b at the same time. */
void	rr_ra_rb(t_stack *a, t_stack *b)
{
	ra_rotate_a(a, true);
	rb_rotate_b(b, true);
	ft_putstr("rr\n");
}
