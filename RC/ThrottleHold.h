#ifndef INC_RC_THROTTLEHOLD_H
#define INC_RC_THROTTLEHOLD_H

/* ---------------------------------------------------------------------------
** This software is in the public domain, furnished "as is", without technical
** support, and with no warranty, express or implied, as to its usefulness for
** any purpose.
**
** ThrottleHold.h
** Throttle hold functionality
**
** Author: Daniel van den Ouden
** Project: ArduinoRCLib
** Website: http://sourceforge.net/p/arduinorclib/
** -------------------------------------------------------------------------*/

#include <inttypes.h>

#include <InputModifier.h>


namespace rc
{

/*! 
 *  \brief     Class to encapsulate Throttle Hold functionality.
 *  \details   This class applies throttle hold to input.
 *  \author    Daniel van den Ouden
 *  \date      Nov-2012
 *  \copyright Public Domain.
 */
class ThrottleHold : public InputModifier
{
public:
	/*! \brief Constructs a ThrottleHold object
	    \param p_throttle The throttle level during hold, range [-256 - 256].
	    \param p_index Input index to use for input and output.*/
	ThrottleHold(int16_t p_throttle = -256, Input p_index = Input_THR);
	
	
	/*! \brief Sets the throttle level during hold.
	    \param p_throttle The throttle level during hold, range [-256 - 256].*/
	void setThrottle(int16_t p_throttle);
	
	/*! \brief Sets the throttle level during hold.
	    \return The throttle level during hold, range [-256 - 256].*/
	int16_t getThrottle() const;
	
	/*! \brief Applies throttle hold.
	    \param p_enabled Whether throttle hold is enabled.
		\param p_throttle Throttle input level, range [-256 - 256].
	    \return Hold applied to p_throttle.*/
	int16_t apply(bool p_enabled, int16_t p_throttle) const;
	
	/*! \brief Applies throttle hold to the set input.
	    \param p_enabled Whether throttle hold is enabled.*/
	void apply(bool p_enabled) const;
	
private:
	int16_t m_throttle; //!< Throttle level during hold.
	
};
/** \example throttlehold_example.pde
 * This is an example of how to use the ThrottleHold class.
 */
 

} // namespace end

#endif // INC_RC_THROTTLEHOLD_H
