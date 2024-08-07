/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 23:19:11 by zadriouc          #+#    #+#             */
/*   Updated: 2024/06/13 11:23:20 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 6
# endif

/* -------- COLORS -------- */
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define END "\033[0m"

enum				e_bool
{
	false,
	true
};

typedef struct s_node
{
	int				data;
	struct s_node	*above;
	struct s_node	*bellow;
}					t_node;

typedef struct s_stack
{
	t_node			*top;
	t_node			*bottom;
	int				size;
}					t_stack;

/* ---- Stack Functions ---- */
t_stack				*stack_init(void);
t_node				*new_elem(int data);
void				push_elem(t_stack *stack, t_node *elem);
void				push_elem_bottom(t_stack *stack, t_node *elem);
void				pop_elem(t_stack *stack);
void				poop_elem(t_stack *stack);
void				free_stack(t_stack *stack);
void				ft_print_stack(t_stack a, char c);
int					is_elem_exist(t_stack a, int elem);
int					is_empty(t_stack *stack);
int					is_sorted(t_stack stack);

/* ---- Operations Functions ---- */
void				sa_swap_a(t_stack *a, int flag);
void				sb_swap_b(t_stack *b, int flag);
void				ss_sa_sb(t_stack *a, t_stack *b, int flag);
void				pa_push_a(t_stack *a, t_stack *b, int flag);
void				pb_push_b(t_stack *a, t_stack *b, int flag);
void				ra_rotate_a(t_stack *a, int flag);
void				rb_rotate_b(t_stack *a, int flag);
void				rr_ra_rb(t_stack *a, t_stack *b, int flag);
void				rra_reverse_rotate_a(t_stack *a, int flag);
void				rrb_reverse_rotate_b(t_stack *a, int flag);
void				rrr_rra_rrb(t_stack *a, t_stack *b, int flag);
void				reverse_stack(t_stack *a, int flag);

/* ---- Checks Functions ---- */
void				get_input(t_stack *a, t_stack *b, char **av, int size);

/* ---- Utils Functions ---- */
void				ft_putstr(char *str);
void				ft_swap(int *a, int *b);
long				ft_atoi(const char *str);
int					ft_strcmp(const char *s1, const char *s2);
size_t				ft_strlen(const char *str);
char				*ft_strdup(char *s1);

/* ------- GNL ------*/
char				*get_next_line(int fd);
char				*ft_strchr(const char *s, int c);
char				*ft_strjoin(char *s1, char *s2);
char				*ft_substr(char const *s, unsigned int start, size_t len);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);

#endif
