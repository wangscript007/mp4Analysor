#ifndef  XIAOC_MP4_MDIABOX_H
#define  XIAOC_MP4_MDIABOX_H
//作者  蔡砚刚  20171227  xiaoc@pku.edu.cn
#include "box.h"

class MDIABOX : public BOX
{
public:
	int        subsubboxConter;//计数EDTSBOX中的subbox个数
public:
	MDIABOX(unsigned __int64 boxSize_, unsigned __int64 read_bytes_);
	int anlysis();
};
#endif