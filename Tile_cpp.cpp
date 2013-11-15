#include "tile.h"
#include "globals.h"
//tile.cpp

Tile::Tile(int identifier)
:m_identifier(identifier)
{
if (0<=identifier<=35)
	m_suit = CIRCLE;
else if (36<=identifier<=71)
	m_suit = LINE;
else if (72<=identifier<107)
	m_suit = WAN;
else if (108<=identifier<=135)
	m_suit = WIND;
else if (136<= identifier<= 143)
	m_suit = FLOWER;
else
	cout <<"FUCK";
//freak the fuck oout

if ( 0<=identifier<=3 || 36<= identifier <=39 || 72<= identifier <= 75 || 108 <= identifier <= 111 || 136<=identifier <= 137)
	m_value = 1;
else if (4<=identifier<=7 || 40<= identifier <=43 || 76<= identifier <= 79 || 112 <= identifier <= 115 || 138<=identifier <= 139)
	m_value = 2;
else if (8<=identifier<=11 || 44<= identifier <=47 || 80<= identifier <= 83 || 116 <= identifier <= 119 || 140<=identifier <= 142)
	m_value = 3;
else if (12<=identifier<=15 || 48<= identifier <=51 || 84<= identifier <= 87 || 120 <= identifier <= 123 || 143<=identifier <= 144)
	m_value = 4;
else if (16<=identifier<=19 || 52<= identifier <=55 || 88<= identifier <= 91 || 124 <= identifier <= 127)
	m_value = 5;
else if (20<=identifier<=23 || 56<= identifier <=59 || 92<= identifier <= 95 || 128 <= identifier <= 131)
	m_value = 6;
else if (24<=identifier<=27 || 60<= identifier <=63 || 96<= identifier <= 99 || 132 <= identifier <= 135)
	m_value = 7;
else if (28<=identifier<=31 || 64<= identifier <=67 || 100<= identifier <= 103)
	m_value = 8;
else if (32<=identifier<=35 || 68<= identifier <=71 || 104<= identifier <= 107)
	m_value = 9;
}

Tile::getType()
{
	return m_suit;
}
Tile::getValue()
{
	return m_value;
}