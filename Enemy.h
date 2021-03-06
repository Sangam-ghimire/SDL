#ifndef __Enemy__
#define __Enemy__

#include <iostream>

#include "SDLGameObject.h"

class Enemy : public SDLGameObject
{
public:

	Enemy(const LoaderParams* pParams);

	void draw();
	void update();
	void clean();
};

#endif // __Enemy__
