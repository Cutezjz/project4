/*
 * Complete this file and run rpcgen -MN minifyjpeg.x
 */


struct square_in{
  int arg1;  
};

struct square_out{
	int res1;
};


program SQUARE_PROG{
	version SQUARE_VERS{
		square_out SQUARE_PROC(square_in) = 1;
	} = 1;
} = 0x31230000;



