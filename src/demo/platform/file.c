/* ///////////////////////////////////////////////////////////////////////
 * includes
 */
#include "tbox.h"
#include <stdlib.h>

/* ///////////////////////////////////////////////////////////////////////
 * main
 */
tb_int_t main(tb_int_t argc, tb_char_t** argv)
{
	// init
	if (!tb_init(malloc(1024 * 1024), 1024 * 1024)) return 0;

	// copy
//	tb_file_copy(argv[1], argv[2]);

	tb_file_init(argv[1], TB_FILE_MODE_CREAT);

	// exit
	tb_exit();
	return 0;
}
