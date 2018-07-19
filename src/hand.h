#ifndef BLACKJACK_HAND_H_
#define BLACKJACK_HAND_H_

#include <vector>
#include "card.h"

class Hand {
public:
    Hand();
    virtual ~Hand();

    // adds a card to the hand
    void Add(Card* pCard);

    // clears hand of all cards
    void Clear();

    // gets hand total value, intelligently treates aces as 1 or 11
    int GetTotal() const;

protected:
    std::vector<Card*> m_Cards;
};

#endif  // BLACKJACK_HAND_H_

