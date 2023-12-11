/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:59:45 by jenny             #+#    #+#             */
/*   Updated: 2023/12/11 17:27:41 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//usando o construtor p/ inicializar os membros da classe, no caso sao os dados input
Contact::Contact(void) {
	return;
}
Contact::Contact( std::string fn, std::string ln, std::string nk, std::string nb, std::string ds): first_name(fn), last_name(ln), nickname(nk), secret(ds), number(nb){
	return ;
}

std::string	Contact::get_fields(int n){
	if (n == 1) {
		if (this->first_name.length() > 10)
			return this->first_name.substr(0, 9).append(".");
		return this->first_name;
	}
	else if (n == 2){
		if (this->last_name.length() > 10)
			return this->last_name.substr(0, 9).append(".");
		return this->last_name;
	}
	else if (n == 3){
		if (this->nickname.length() > 10)
			return this->nickname.substr(0,9).append(".");
		return this->nickname;
	}
	else
		return (0);
}

void	Contact::print(){
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Name: " << this->number << std::endl;
	std::cout << "Darkest secret: " << this->secret << std::endl;
}
