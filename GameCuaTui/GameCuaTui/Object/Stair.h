#pragma once
#ifndef __STAIR_H__
#define __STAIR_H__

#include "..\FrameWork\define.h"
#include "BaseObject.h"
#include "..\Framework\IComponent.h"
#include "CollisionBody.h"

class Stair : public BaseObject
{
public:
	Stair(int x, int y, int width, int height, int step, bool direct);
	~Stair();

	int GetStep();
	bool GetDirection();

	void init() override;
	void update(float deltatime) override;
	void draw(LPD3DXSPRITE, Viewport*) override;
	void release() override;

	GVector2 getPosition() override;
	void setPosition(GVector2 position) override;

	GVector2 getOrigin() override;

	RECT getBounding() override;

#pragma region Hide all
	float getPositionX() override;
	float getPositionY() override;
	void setPosition(GVector3 vector) override;
	void setPosition(float x, float y, float z) override;
	void setPosition(float x, float y) override;
	void setPositionX(float x) override;
	void setPositionY(float y) override;
	void setOrigin(GVector2 origin) override;

	GVector2 getScale() override;
	void setScale(GVector2 scale) override;
	void setScale(float scale) override;
	void setScaleX(float sx) override;
	void setScaleY(float sx) override;

	float getRotate() override;
	void setRotate(float degree) override;
	GVector2 getAnchorPoint() override;

	void setZIndex(float z) override;
	float getZIndex() override;
#pragma endregion
private:
	map<string, IComponent*> _listComponent;
	int _step;
	bool _direct;
	RECT _bound;
};


#endif // !__STAIR_H__
