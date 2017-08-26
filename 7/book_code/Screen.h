class Screen
{
public:
	Screen& set(char);
	Screen& set(pos, pos, char);

	typedef std::string::size_type pos;
	// alternatetive way to declare a type member using a type alias
	// using pos = std::string::size_type;
	Screen() = default; // needed becuase Screen has another constructor
	// cursor initialized to 0 by its in-class initializer
	Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) { }
	Screen& display(std::ostream& os)
	{
		do_display(os);
		return *this;
	}
	const Screen& display(std::ostream& os) const
	{
		do_display(os);
		return *this;
	}

	char get() const
	{
		return contents[cursor];
	}
	inline char get(pos ht, pos wd) const;
	Scrren& move(pos r, pos c);
	void some_member() const;

private:
	pos cursor = 0;
	pos height = 0;
	std::string contents;
	mutable size_t access_ctr;	// may change even in a const object

	void do_display(std::ostream &os) const {os << contents;}
};
inline Screen& Screen::set(char c)
{
	contents[cursor] = c;
	return *this;	
}
inline Screen& Screen::set(pos r, pos col, char ch)
{
	contents[r * width + col] = ch;
	return *this;
}

inline Screen& Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}
inline char Screen::get(pos r, pos c) const
{
	pos row = r * width;
	return contents[row + c];
}

void Screen::some_member() const
{
	++access_ctr;	// keep a count of the calls to any member function
}
