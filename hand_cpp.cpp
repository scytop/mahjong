//hand.cpp

#include "hand.h"
#include "globals.h"
Hand::Hand(int startingHand[16])
{
	
	... //sort identifiers from smallest to biggest pass by reference
	for (int k=0; k<16; k++)
	m_identifiers[k] = startingHand[k]
	m_handLength = 16;
	for(int k= 0; k<16; k++)
	{
		m_tiles[k] = Tile(m_identifiers(k));
	}
}

Hand::handLength()
{
	return m_handLength;
}

Hand::discard(int numberLost)
{
	m_handLength -= numberLost;
}

Hand::getSuit(int position)
{
	return m_tiles[position].getSuit();	
}

Hand::getValue(int position)
{
	return m_tiles[position].getValue();
}