/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000004199576246_3224323566_init();
    work_m_00000000001295729618_4144471541_init();
    work_m_00000000001475265366_0886308060_init();
    work_m_00000000001813966565_1621229167_init();
    work_m_00000000001107475570_2461264495_init();
    work_m_00000000001777987155_1785967555_init();
    work_m_00000000003641102827_3877310806_init();
    work_m_00000000000552888376_1966753845_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000552888376_1966753845");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
