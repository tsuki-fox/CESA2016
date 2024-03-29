#pragma once

#include<cocos2d.h>
#include"MoveStrategy/MoveStrategy.h"

class MoveLinear :public MoveStrategy
{
private:
	//移動速度
	float m_moveSpeed;
	//移動方向
	cocos2d::Vec2 m_moveDir;

public:
	/*==============================
	ctor
	===============================*/
	MoveLinear(GameObject* pTargetObject, float moveSpeed, const cocos2d::Vec2& moveDir);

	/*==============================
	setter
	===============================*/
	void setMoveSpeed(float moveSpeed);
	void setMoveDirection(cocos2d::Vec2 moveDir);

	/*==============================
	getter
	===============================*/
	float getMoveSpeed()const;
	const cocos2d::Vec2& getMoveDirection()const;

	/*==============================
	method
	===============================*/
	void update(float dt)override;
};