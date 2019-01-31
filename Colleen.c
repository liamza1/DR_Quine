/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Colleen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstreak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 09:39:28 by lstreak           #+#    #+#             */
/*   Updated: 2018/11/30 09:39:32 by lstreak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int add(int a, int b)
{
    return (a + b);
}

int main(void)
{
    char *a =" #include <stdio.h>%1$c/*%1$c%2$cc1%1$c*/%1$cint add(int a, int b){return (a + b);}int main(void){/*c2*/char*a=%3$c%4$s%3$c;printf(a,add(5,5),9,34,a);}%1$c";
    printf(a, add(5, 5), 9, 34, a);
}
