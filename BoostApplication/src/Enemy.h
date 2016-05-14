#pragma once
#include <iostream>
#include <boost/format.hpp>

#include <boost/filesystem.hpp>
//
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>

using namespace std;
using namespace boost;

namespace propertyTree = boost::property_tree;

class Enemy
{
public:
	Enemy();
	~Enemy();

	string getEnemyName(string);
	int getEnemyStatus(string);
};

