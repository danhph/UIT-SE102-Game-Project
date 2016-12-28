#ifndef _BALL1_H_
#define _BALL1_H_

#include "..\FrameWork\define.h"
#include "BaseObject.h"
#include "..\Framework\IComponent.h"
#include "CollisionBody.h"
#include "../FrameWork/Animation.h"
#include "../Framework/StopWatch.h"

class Ball1 : public BaseObject
{
public:
	Ball1(int x, int y);

	void init() override;
	void update(float deltatime) override;
	void draw(LPD3DXSPRITE, Viewport*) override;
	void release() override;
	RECT getBounding() override;

	float checkCollision(BaseObject* object, float dt) override;
protected:
	map<string, IComponent*> _componentList;
	int _initX;
	bool _stop;

	StopWatch* _destroyStopWatch;
	bool _startDestroyStopWatch;
};
#endif