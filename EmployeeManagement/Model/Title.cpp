/**
 * @file Title.cpp
 * @author ndKhoi (nguyen.khoi@hitachivantara.com)
 * @brief Model of Title
 * @version 0.1
 * @date 2022-06-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Title.h"


Title::Title(int ID, const String &name, double salary):m_ID(ID), m_name(name), m_salary(salary) {

}

Title::~Title() {

}
std::string Title::getTitleID() {
	return std::to_string(m_ID);
	}

std::string Title::getTitleName() {
	return m_name;
	}
