class Book{
    protected:
    string name;
    string author;
    int price;
    string publication;
    
    public:
    Book(){}
    
    Book(string name, string author, int price, string publication)
    {
        this->name=name;
        this->author=author;
        this->price=price;
        this->publication=publication;
    }
    

};