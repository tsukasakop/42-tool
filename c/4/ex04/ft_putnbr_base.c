/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <tkondo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:08:01 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/19 12:08:01 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

bool is_valid_base(char *base) {
    int len = strlen(base);
    
    if (len < 2) {
        return false;
    }
    
    for (int i = 0; i < len; i++) {
        if (base[i] == '+' || base[i] == '-') {
            return false;
        }
        
        for (int j = i + 1; j < len; j++) {
            if (base[i] == base[j]) {
                return false;
            }
        }
    }
    
    return true;
}

void ft_putnbr_base(int nbr, char *base) {
    if (!is_valid_base(base)) {
        return;
    }
    
    int radix = strlen(base);
    bool is_negative = false;
    
    if (nbr < 0) {
        is_negative = true;
        nbr = -nbr;
    }
    
    if (nbr >= radix) {
        ft_putnbr_base(nbr / radix, base);
    }
    
    char digit = base[nbr % radix];
    write(1, &digit, 1);
    
    if (is_negative) {
        write(1, "-", 1);
    }
}
/*
#include <unistd.h>

int main() {
    int nbr = -42;
    char *base = "01";
    ft_putnbr_base(nbr, base);
    write(1, "\n", 1);
    
    return 0;
}//*/
