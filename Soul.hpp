/*
 * Soul.hpp
 *
 *  Created on: Jul 5, 2023
 *      Author: mike
 */

#ifndef SOUL_HPP_
#define SOUL_HPP_
#include "Animal.hpp"
#include "Object.hpp"
#include "Human.hpp"

class Soul : public Object
{
private:
    Animal* m_pAvatar;
protected:
    int m_iGoodness;
public:
	Soul(int iGoodness) : m_iGoodness(iGoodness) {}
	~Soul() {}
    void attatchAvatar(Human*);
    virtual void beat() {}
    virtual void beatMaybe() {}
};
#endif /* SOUL_HPP_ */
