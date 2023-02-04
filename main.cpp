#include "WebServer.h"

//using namespace std;

void main()
{
	WebServer webServer("127.0.0.1", 8080);
	if (webServer.init() != 0)
	{
		return;
	}
	webServer.run();

	system("pause");
}