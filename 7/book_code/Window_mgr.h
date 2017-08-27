class Window_mgr
{
public:
	// location ID for each screen on the window
	using ScreenIndex = std::vector<Screen>::size_type;
	// reset the Screen at the given position to all blanks
	void clear(ScreenIndex);

private:
	// Screens this Window_mgr is tracking by default, a Window_mgr has one standard sized blank Screen
	std::vector<Screen> screens{Scrren(24, 80, ' ')};
	
	void Window_mgr::clear(ScreenIndex i)
	{
		// s is a reference to the Scrren we want to clear
		Screen& s = screens[i];
		// reset the contents of that Screen to all blanks
		s.contents = string(s.height * s.width, ' ');
	}	
};
