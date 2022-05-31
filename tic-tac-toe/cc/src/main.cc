#include <cstdio>
#include "App.h"

int
main(int argv, char** args)
{
    App app;

    if (!app.init())
	{
	    printf("Cannot initialize\n");
	}

    // app.run()

    return 0;
}
