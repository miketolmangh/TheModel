/*
 * Object.hpp
 *
 *  Created on: Jul 2, 2023
 *      Author: mike
 */

#ifndef OBJECT_HPP_
#define OBJECT_HPP_

class Object
{
public:
	Object() {}
	~Object() {}

    virtual void beat() = 0;
};

#endif /* OBJECT_HPP_ */
