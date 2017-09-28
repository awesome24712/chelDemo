//COMMENT DEMO
/*
The Best Tool or Game Ever - A modification
Copyright (C) 2017, The Best Tool or Game Ever Team and Contributors
 
This awesome tool is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.
 
The Best Tool or Game Ever is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

Contact information:
Michael "Awesome" Trunk		mail, in reverse: com . gmail @ latrunkster
 
You may also contact the (future) team via the The Best Game or Tool Ever website and/or forum at:
www.bestgameortoolever.com
 
Note that because of the sheer volume of files in the project, this
notice cannot be put in all of them, but merely the ones that have any
changes from the original.
 
In order to facilitate easy searching, all changes are and must be
commented on the following form:
//BGTE - <name of contributer>[ - <small description>]
*/

//BGTE - Michael - includes
#include <stdio.h>
#include <string>
//

/**
 * @author - Michael Trunk
 * @date 28/08/2017
 * @file main.cpp
 * @brief Demonstrates the usefulness of commenting code.
 */
int main()
{
	
	//Let's print out some important messages
	printf("Strings ignore /*comment*/ syntax");
	
	printf /*this is an in-line comment*/ ("Paranthesis can be split from the function by empty space");
	
	//printf("This code won\'t run");
}
