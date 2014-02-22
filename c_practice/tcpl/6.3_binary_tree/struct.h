/*
 * struct.h
 *
 *  Created on: Jan 16, 2014
 *      Author: gil
 */

#ifndef STRUCT_H_
#define STRUCT_H_

struct tnode {
	char *word;
	int count;
	struct tnode *left;
	struct tnode *right;
};

#endif /* STRUCT_H_ */
