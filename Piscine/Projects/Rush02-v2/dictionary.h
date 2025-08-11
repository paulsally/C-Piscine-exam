/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarpolse <sarpolse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 16:19:44 by sarpolse          #+#    #+#             */
/*   Updated: 2025/08/03 14:06:14 by sarpolse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARY_H
# define DICTIONARY_H
# define MAX_WORD 37
# define MAX_DEF 11

typedef struct
{
	char	key[MAX_WORD];
	char	value[MAX_DEF];
} DictionaryEntry;

#endif
