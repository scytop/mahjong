//hand.h

#ifndef INCLUDED_HAND
#define INCLUDED_HAND
include "tile.h"
include "globals.h"

class Hand
{
	public:
		Hand(int startingHand[16]);
		int 	handLength();
		char 	getSuit(int position);
		int 	getValue(int position);
		void 	discard(int numberLost);
	private:
	int		m_identifiers[16];
	int 	m_handLength;
	Tile 	m_tiles[16];
};



#endif