/*
 * interaction.h
 *
 *  Created on: 14/12/2012
 *      Author: repli
 */

#ifndef INTERACTION_H_
#define INTERACTION_H_

/**
 * @brief Sets problem's size (random array's size)
 * @return a positive integer that will represent problem's size hereinafter
 */
int getProblemSize();

/**
 * @brief Sets the maximum integer to generate
 * @return a positive integer that will represent the maximum integer to generate
 */
int getMaximumInteger();


/**
 * @brief Sets the gap between sort iteration
 * @return incremental value between iterations
 */
int getGap();


/**
 * @brief Shows the algorithms menu
 * @return a <em>char</em> to be used in the main switch case
 */
char chooseAlgorithm();

#endif /* INTERACTION_H_ */
