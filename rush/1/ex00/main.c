/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:36:34 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/20 15:36:34 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkondo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:55:40 by tkondo            #+#    #+#             */
/*   Updated: 2024/01/20 14:55:40 by tkondo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int print_err();
int print_box(cur, ptn_arr);

/*
 * Function: calc_ptns
 * -----------------
 *  calculate all row (or column) patterns on given number square box.
 *
 *  args:
 *  	nbr: square size
 *  returns:
 *  	pointer to array
 */
int*	calc_ptrns(nbr);

/*
 * Function: set_ptns
 * ------------------
 *  set passible pattern ids on array and nbr.
 *
 *  args:
 *  	lhs: num of row left (or column up)
 *  	rhd: num of row righr (or column down)
 *  returns:
 *  	none
 */
void	set_ptns(int lhs, int rhs, int* addr_arr, int* addr_nbr);

/*
 * Function: check_ptn
 * ------------------
 *  check ptn is valid
 *
 *  args:
 *  returns:
 *   0 if invalid ptn
 *   1 valid
 */
int	check_ptn(int *ptn, int lhs, int rhs);

/*
 * Function: iter_cur
 * ------------------
 *  check next pattern existance and iterate.
 *
 *  args:
 *   cur: current patterns.
 *  returns:
 *   0 if nothing to next cur
 *   1 if normal
 */
int	iter_cur(int* cur);

int	main(int argc, char **argv)
{
	int	n = 4;	
	// terminal args error
	// NOTE: argv[1] overrun 
	if (argc != 2)
	{
		print_err();
		return (0);
	}	
	// catch terminal arguments
	// argv[1] "2 1 2 3 4 .."
	// ↓
	// cu[0] = 2 cu[1]=1 ...
	int cu[n];
	int cd[n];
	int rl[n];
	int rr[n];
	
	// generate possible patterns for n
	int *ptn;
	ptn = calc_ptrns(ptns);

	// calc posible patterns for each row 
	int ptn_arr[n];
	int ptn_nbr[n];
	int i = 0;
	while (i < n)
		get_ptns(rl[i], rr[i], ptn_arr, ptn_nbr);
	
	// check each column
	// generate box array
	int box[n][n] = {{0}};
	int cur[n] = {0,0,0,0};
	int is_valid = 0;
	while(row pattern roop)
	{
		int i_clm = 0;
		while(i_clm < n)
		{
			int cur_clm[n];// format: {1,2,3,4} 
			set_column(column, cur);
			// valid column
			if (check_ptn(column, cu[i_clm], cd[i_clm]))
			{
				if (i_clm == n - 1)
				{
					is_valid = 1;
					break;
				}
				i_clm++;
				continue;
			}
			// invalid column
			break;
		}
		// when found valid box
		if (is_valid)
			break;
		// iterate cur
		if (iter_cur(cur, ptn_arr, ptn_nbr))
			break;
	}

	if (is_valid)
		print_box(cur, ptn_arr);
	else
		print_err();
}
