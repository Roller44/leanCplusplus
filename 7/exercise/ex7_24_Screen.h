class Screen
{
public:
	typedef std::string::size_type pos;
	// alternatetive way to declare a type member using a type alias
	// using pos = std::string::size_type;
	Screen() = default; // needed becuase Screen has another constructor
	// cursor initialized to 0 by its in-class initializer
	Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') { }
	Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) { }
	char get() const
	{
		return contents[cursor];
	}
	inline char get(pos ht, post wd) const;
	Scrren& move(pos r, pos c);
	void some_member() const;

private:
	pos cursor = 0;
	pos height = 0;
	std::string contents;
	mutable size_t access_ctr;	// may change even in a const object
};

inline
Screen& Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}
char Screen::get(pos r, pos c)
{
	pos row = r * width;
	return contents[row + c];
}

void Screen::some_member() const
{
	++access_ctr;	// keep a count of the calls to any member function
}
