/**
 * @class Messages
 * @brief User interaction
 *
 *
 * @author Sergio Revilla
 */

#ifndef MESSAGES_H_
#define MESSAGES_H_

class Messages {

public:

	/**
	 * @brief Sets problem's size (random array's size)
	 * @return a positive integer that will represent problem's size hereinafter
	 */
	static int getProblemSize();

	/**
	 * @brief Sets the maximum integer to generate
	 * @return a positive integer that will represent the maximum integer to generate
	 */
	static int getMaximumInteger();

	/**
	 * @brief Sets the gap between sort iteration
	 * @return incremental value between iterations
	 */
	static int getGap();

	/**
	 * @brief Shows the algorithms menu
	 * @return a <em>char</em> to be used in the main switch case
	 */
	static char chooseAlgorithm();
};

#endif /* MESSAGES_H_ */
