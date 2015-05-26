/* ---------------------------------------------------------------------------
** This software is in the public domain, furnished "as is", without technical
** support, and with no warranty, express or implied, as to its usefulness for
** any purpose.
**
** InputProcessor.cpp
** Base class for classes taking input
**
** Author: Daniel van den Ouden
** Project: ArduinoRCLib
** Website: http://sourceforge.net/p/arduinorclib/
** -------------------------------------------------------------------------*/

#include <InputProcessor.h>


namespace rc
{

// Public functions

void InputProcessor::setSource(Input p_source)
{
	m_source = p_source;
}


Input InputProcessor::getSource() const
{
	return m_source;
}


// Protected functions

InputProcessor::InputProcessor(Input p_source)
:
m_source(p_source)
{
	
}


// namespace end
}
