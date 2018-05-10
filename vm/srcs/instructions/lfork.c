/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lfork.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rloulizi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 13:31:20 by rloulizi          #+#    #+#             */
/*   Updated: 2018/02/02 15:45:56 by rloulizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vm.h"

void	ft_lfork(t_vm *vm, t_list_cpu *cpu)
{
	int ind;

	ind = indirect(vm, cpu, 0);
	add_new_cpu(vm, cpu, cpu->pc + ind);
}