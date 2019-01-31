/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Grace.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstreak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 09:39:38 by lstreak           #+#    #+#             */
/*   Updated: 2018/11/30 09:39:39 by lstreak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define D1
#define D2
#define D3 int main(){FILE*f=fopen("Grace_kid.c", "w");char*a="#include<stdio.h>%1$c/*%1$c%4$cc1%1$c*/%1$c#define D1%1$c#define D2%1$c#define D3 int main(){FILE*f=fopen(%2$cGrace_kid.c%2$c, %2$cw%2$c);char*a=%2$c%3$s%2$c;fprintf(f,a,10,34,a,9);}%1$cD3%1$c";fprintf(f,a,10,34,a,9);}
D3
