

class Card{
    public:
        int value;
        
        Card(int val);
};

class Clubs : public Card{
    public:
        Clubs(int val);

};

class Diamonds : public Card{
    public:
        Diamonds(int val);

};

class Spades : public Card{
    public:
        Spades(int val);
};

class Hearts : public Card{
    public:
        Hearts(int val);
};

