#include <iostream>
#include <string>
#include <array>
#include <cstdlib>
#include <ctime>
using namespace std;

/*class D3point
{
private:
    double mx;
    double my;
    double mz;
public:
    D3point()
    {
    }
    D3point(int add_x, int add_y, int add_z) : mx{add_x}, my{add_y}, mz{add_z}
    {
    }
    void setValue(int add_x, int add_y, int add_z)
    {
        mx = add_x;
        my = add_y;
        mz = add_z;
    }

    void print()
    {
        cout << "x = " << mx << " y = " << my << " z = " << mz<< endl;
    }
};


int main()
{
    D3point point;
    point.setValue(3.0, 4.0, 5.0);
    point.print();

    return 0;
}*/

/*int MAX_FLOWERS_TYPE;

class Flower {
public:
    enum FlowerType 
    {
    Tulip,
    Rose,
    Peony,
    Chamomile,
    Carnation,
    Lily,
    MAX_FLOWER_TYPES
    };
    
  Flower(FlowerType type, std::string name, int health)
  {
    this->type
    this->name
    this->health

  }
   /*:  m_type(type), m_name(name), m_health(health) {}*/
    
   /* std::string getTypeString() const {
        switch(m_type) {
            case Tulip:
                return "Tulip";
            case Rose:
                return "Rose";
            case Peony:
                return "Peony";
            case Chamomile:
                return "Chamomile";
            case Carnation:
                return "Carnation";
            case Lily:
                return "Lily";
            default:
                return "Unknown";
        }
    }
    private:
    FlowerType m_type;
    std::string m_name;
    int m_health;
}

void print() const 
{
        std::cout << getTypeString()<< m_name << m_health << " health\n";
}

static class FlowerGeneron( )
{
    int getRandomNumber(int min, int max)
    {
        static const double fraction = 1.0 /(static_cast<double>(RAND_MAX)+1.0);
        return static_cast<int>(rand() * fraction* (max-min+1)+min);
    }
    static generateFlower(Flower::Rose, "Rose red", 90);
}

int main()
{
    Flower rose (Flower::Rose, "Rose red", 90);
    rose.print();

    return 0;
}*/



class Card {
public:
    enum CardSuit {
        CLUBS,
        DIAMONDS,
        HEARTS,
        SPADES,
        SUIT_COUNT
    };

    enum CardRank {
        TWO,
        THREE,
        FOUR,
        FIVE,
        SIX,
        SEVEN,
        EIGHT,
        NINE,
        TEN,
        JACK,
        QUEEN,
        KING,
        ACE,
        RANK_COUNT
    };
private:
    CardRank m_rank;
    CardSuit m_suit;
    
public:
    Card(CardRank rank = TWO, CardSuit suit = CLUBS)
        : m_rank(rank), m_suit(suit)
    {
    }
    
    Card(const Card& card)
        : m_rank(card.m_rank), m_suit(card.m_suit)
    {
    }

    public:
    void printCard() const {
        std::string rankCode = "";
        std::string suitCode = "";

        switch (m_rank) {
            case TWO:   rankCode = "2"; break;
            case THREE: rankCode = "3"; break;
            case FOUR:  rankCode = "4"; break;
            case FIVE:  rankCode = "5"; break;
            case SIX:   rankCode = "6"; break;
            case SEVEN: rankCode = "7"; break;
            case EIGHT: rankCode = "8"; break;
            case NINE:  rankCode = "9"; break;
            case TEN:   rankCode = "T"; break;
            case JACK:  rankCode = "J"; break;
            case QUEEN: rankCode = "Q"; break;
            case KING:  rankCode = "K"; break;
            case ACE:   rankCode = "A"; break;
            default:    rankCode = "?"; break;
        }

        switch (m_suit) {
            case CLUBS:    suitCode = "C"; break;
            case DIAMONDS: suitCode = "D"; break;
            case HEARTS:   suitCode = "H"; break;
            case SPADES:   suitCode = "S"; break;
            default:       suitCode = "?"; break;
        }

        std::cout << rankCode << suitCode;
    }

    public:
    int getCardValue() const {
        int value = 0;

        switch (m_rank) {
            case TWO:   value = 2; break;
            case THREE: value = 3; break;
            case FOUR:  value = 4; break;
            case FIVE:  value = 5; break;
            case SIX:   value = 6; break;
            case SEVEN: value = 7; break;
            case EIGHT: value = 8; break;
            case NINE:  value = 9; break;
            case TEN:   value = 10; break;
            case JACK:  value = 10; break;
            case QUEEN: value = 10; break;
            case KING:  value = 10; break;
            case ACE:   value = 11; break;
        }

    };
};

