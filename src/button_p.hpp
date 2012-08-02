/**************************************************************************
 *  Copyright 2012 KISS Institute for Practical Robotics                  *
 *                                                                        *
 *  This file is part of libkovan.                                        *
 *                                                                        *
 *  libkovan is free software: you can redistribute it and/or modify      *
 *  it under the terms of the GNU General Public License as published by  *
 *  the Free Software Foundation, either version 2 of the License, or     *
 *  (at your option) any later version.                                   *
 *                                                                        *
 *  libkovan is distributed in the hope that it will be useful,           *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *  GNU General Public License for more details.                          *
 *                                                                        *
 *  You should have received a copy of the GNU General Public License     *
 *  along with libkovan. Check the LICENSE file in the project root.      *
 *  If not, see <http://www.gnu.org/licenses/>.                           *
 **************************************************************************/

#ifndef _BUTTON_P_HPP_
#define _BUTTON_P_HPP_

#include "button_ids.hpp"
#include "private.hpp"

namespace Private
{
	class Button
	{
	public:
		
		
		void setText(::Button::Type::Id id, const char *text);
		bool isTextDirty(::Button::Type::Id id) const;
		const char *text(::Button::Type::Id id) const;
		void setPressed(::Button::Type::Id id, bool pressed);
		bool isPressed(::Button::Type::Id id) const;
		
		void setExtraShown(const bool& shown);
		bool isExtraShown() const;
		bool isExtraShownDirty() const;
		
		static Button *instance();
	private:
		Private::SharedButton *lookup(const ::Button::Type::Id& id, Private::SharedMemoryInterClient *shm) const;
		
		Button();
		Button(const Button& rhs);
	};
}

#endif
