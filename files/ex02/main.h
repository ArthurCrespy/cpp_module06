/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:43:24 by acrespy           #+#    #+#             */
/*   Updated: 2024/04/03 14:43:27 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MAIN_H
# define MAIN_H

#include "Base.hpp"

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif
