#pragma once

//##################################################################
//#     Be careful with the cell size to width                     #
//#     and height ratio. Stack Overflow is possible               #
//##################################################################

// NOTE: We could change to storing the grid on the heap.
// This would solve the Stack Overflow issue.

#define CELL_SIZE		20
#define WINDOW_WIDTH	800
#define WINDOW_HEIGHT	600

//##################################################################
//#     Calculate how many rows and columns for Grid class         #
//##################################################################

#define ROWS		WINDOW_HEIGHT / CELL_SIZE
#define COLUMNS		WINDOW_WIDTH / CELL_SIZE