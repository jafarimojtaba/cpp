/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjafari <mjafari@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:19:15 by mjafari           #+#    #+#             */
/*   Updated: 2022/09/16 15:20:47 by mjafari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <map>

class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	Harl(/* args */);
	~Harl();
	void    complain( std::string level );
};
typedef void (Harl::*FnPtr)(void);

enum e_msg{
	edebug = 1,
	einfo = 2,
	ewarning = 3,
	eerror = 4,
};
