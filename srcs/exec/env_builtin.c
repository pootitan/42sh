/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 21:25:47 by juochen           #+#    #+#             */
/*   Updated: 2018/12/11 21:25:49 by juochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/exec.h"

void	env_builtin(t_exec *exec, char **arg)
{
	t_list *env_iter;

	arg = NULL;
	env_iter = exec->env_dict->iter;
	while (env_iter)
	{
		ft_printf("%s=%s\n", env_iter->content,
			dict_get(exec->env_dict, env_iter->content));
		env_iter = env_iter->next;
	}
}
