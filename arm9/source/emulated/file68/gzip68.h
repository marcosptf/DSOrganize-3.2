/**
 * @ingroup file68_gzip68_devel
 * @file    file68/gzip68.h
 * @author  benjamin gerard
 * @date    2003/09/03
 * @brief   gzip loader header.
 *
 * $Id: gzip68.h 503 2005-06-24 08:52:56Z loke $
 */

#ifndef _GZIP68_H_
#define _GZIP68_H_

#ifdef __cplusplus
extern "C" {
#endif

/** @defgroup  file68_gzip68_devel  gzip file support.
 *  @ingroup   file68_devel
 *
 *    Provides functions for loading and saving gzip file.
 *
 *  @{
 */

/** Test gzip file header magic header.
 *
 *  @param  buffer  Buffer containing at least 3 bytes from gzip header.
 *
 *  @retval  1  buffer seems to be gzipped..
 *  @retval  0  buffer is not gzipped.
 */
int gzip_is_magic(const void * buffer);

/** Load an optionnally gzipped file.
 *
 *    The gzip_load() function allocates memory and loads the totality of the
 *    given file. If the file is a gzipped file, it will be inflate.
 *
 * @param  fname  Name of file to load.
 * @param  ulen   Pointer to uncompressed or total size of file.
 *                May be set to 0.
 *
 * @return Pointer to the loaded file buffer.
 * @retval 0 Error
 */
void *gzip_load(const char *fname, int *ulen);

/**
 *@}
 */

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _GZIP68_H_ */

