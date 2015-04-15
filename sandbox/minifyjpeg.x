/*
 * Complete this file and run rpcgen -MN minifyjpeg.x
 */


struct number{
	int num1;
	int num2;
	void data<>;
};

program ADDITION {
	version ADDITION_1{
		int ADD(number) = 1;
	} = 1;
} = 0x2fffffff;

