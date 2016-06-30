/*
{
	.name         = "w_exec",
        .args_type    = "despath:s",
        .params       = "despath",
        .help         = "Exec commands from QEMU to Windows agent. Need full path of target file in Windows.",
        .mhandler.cmd = do_win_exec,
},
{
	.name	      = "w_invo",
        .args_type    = "despath:s",
        .params       = "despath",
        .help         = "Invo commands from QEMU to Windows agent. Need full path of target file in Windows.",
        .mhandler.cmd = do_win_invo,
},
{
	.name	      = "w_stat",
	.args_type    = "",
	.params       = "",
	.help         = "Check Windows agent's status.",
	.mhandler.cmd = do_win_status,
},
{
	.name	      = "w_logf",
	.args_type    = "despath:s",
	.params       = "despath",
	.help         = "Get log's file",
	.mhandler.cmd = do_win_logf,
},
*/
{
    .name         = "w_impo",
    .args_type    = "srcpath:s,dstpath:s",
    .params       = "fullpath_host_srcfile fullpath_guest_dstfile",
    .help         = "Import a host file into the guest. Fullpath of both the source file and the destination file are required.",
    .mhandler.cmd = do_win_impo,
},
{
    .name         = "w_expo",
    .args_type    = "srcpath:s,dstpath:s",
    .params       = "fullpath_guest_srcfile fullpath_host_dstfile",
    .help         = "Export a guest file to the host. Fullpath of both the source file and the destination file are required.",
    .mhandler.cmd = do_win_expo,
},
{
	.name  	      = "w_init",
	.args_type    = "",
	.params       = "",
	.help	      = "Create an agent thread to communicate with Windows in-VM agent server.",
	.mhandler.cmd = do_win_init,
},


