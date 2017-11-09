#ifndef JSON_H
#define JSON_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

enum cmd_table_index_e
{
	CMD_START = 0,
	/* in cmd */
	CMD_IN_START = CMD_START,
	CMD_GET_STATUS = CMD_IN_START,
	CMD_OPEN,
	CMD_ADMIN_FETCH,
	CMD_ADMIN_ROTATE,
	CMD_ADMIN_CLOSE,
	CMD_HEADSET_BUY,
	CMD_HEADSET_ADD,
	CMD_DFU,
	CMD_IN_END = CMD_DFU,

	/* out cmd */
	CMD_OUT_START,
	CMD_STATUS = CMD_OUT_START,

	CMD_OPEN_OK,
	CMD_OPEN_ERROR,

	CMD_ADMIN_FETCH_OK,
	CMD_ADMIN_FETCH_ERROR,
	CMD_ADMIN_ROTATE_OK,
	CMD_ADMIN_ROTATE_ERROR,
	CMD_ADMIN_CLOSE_OK,
	CMD_ADMIN_CLOSE_ERROR,

	CMD_HEADSET_BUY_OK,
	CMD_HEADSET_BUY_ERROR,
	CMD_HEADSET_ADD_OK,
	CMD_HEADSET_ADD_ERROR,

	CMD_ERROR_LOG,

	CMD_OUT_END = CMD_ERROR_LOG,
	CMD_END = CMD_OUT_END,

	CMD_NULL,
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* JSON_H */

