/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_content.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 15:01:44 by jlozano-          #+#    #+#             */
/*   Updated: 2019/10/19 15:20:27 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/* return 0 means not valid */
/* return 1 means valid */

int part1(int pos, char *c)
{
    while (c[pos])
    {
        if (c[pos] >= 48 && c[pos] <= 57)
        {
            if (c[pos + 1] >= 48 && c[pos + 1] <= 57)
                ;
            else if (c[pos + 1] == ' ' || c[pos + 1] == ':')
                ;
            else
                return(0);
        }
        else if (c[pos] == ' ')
            ;
        else if (c[pos] == ':')
            return (pos);
        else
            return (0);
        pos++;
    }
    return(0);
}

int	validate_content(char *c)
{
	int pos;
	int next;

	pos = 0;
    next = 0;
	while (c[pos])
	{
		while (next == 0)
		{
            if (part1(pos, c) == 0)
                return (0);
            else
                next++;
        }
        pos++;
    }
	return (1);
}

int main()
{
    printf("%i",validate_content("222 "));
}
