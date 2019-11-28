/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: settaqi <settaqi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:04:51 by settaqi           #+#    #+#             */
/*   Updated: 2019/10/28 21:59:56 by settaqi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int		ft_walo(int fd, char **data);
int		get_next_line(int fd, char **tvg);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
int		ft_strchr(const char *str, int c, int cas);
char	*get_line(char **data, int *v);
char	*ft_substr(char const *s, unsigned int start, int len);

#endif
