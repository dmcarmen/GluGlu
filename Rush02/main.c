/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 14:34:26 by jlozano-          #+#    #+#             */
/*   Updated: 2019/10/19 15:16:00 by jlozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int		validate_content(char *content);
void	clean_content(char *content);

int		main(int n, char **arg)
{
	char	content[4097];
	int		fileid;
	int		filesize;

	printf("number of arguments: %i\n", n);
	if (n == 3)
		fileid = open(arg[1], O_RDONLY);
	else if (n == 2)
		fileid = open("file", O_RDONLY);
	printf("fileid:%i\n", fileid);
	filesize = read(fileid, content, 4096);
	content[filesize] = '\0';
	printf("content of the dictionary:\n%s\n", content);
	validate_content(content);
}
