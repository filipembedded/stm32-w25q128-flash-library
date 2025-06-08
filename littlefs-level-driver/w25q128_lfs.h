/**
 * @file w25q128_lfs.h
 * @brief w25q128 flash littlefs layer 
 * @author Filip Stojanovic
 */

#ifndef NOR_FLASH_H
#define NOR_FLASH_H

#include "lfs.h"

/**
 * @brief littlefs read function - read a region in a block 
 * @param c Pointer to the lfs_config struct
 * @param block littlefs block
 * @param off littlefs offset in block
 * @param buffer Pointer to the data buffer
 * @param size littlefs data size
 * @return littlefs error codes
 */
int w25q128_lfs_read(const struct lfs_config *c, lfs_block_t block,
                                lfs_off_t off, void *buffer, lfs_size_t size);

/**
 * @brief littlefs prog function - program a region in a block 
 * @param c Pointer to the lfs_config struct
 * @param block littlefs block
 * @param off littlefs offset in block
 * @param buffer Pointer to the data buffer
 * @param size littlefs data size
 * @return littlefs error codes
 */
int w25q128_lfs_prog(const struct lfs_config *c, lfs_block_t block,
                            lfs_off_t off, const void *buffer, lfs_size_t size);

/**
 * @brief littlefs erase function - erase a block 
 * @param c Pointer to the lfs_config struct
 * @param block littlefs block
 * @return littlefs error codes
 */
int w25q128_lfs_erase(const struct lfs_config *c, lfs_block_t block);

/**
 * @brief littlefs sync function - sync the state of underlying block device 
 * @param c Pointer to the lfs_config struct
 * @return littlefs error codes
 */
int w25q128_lfs_sync(const struct lfs_config *c);

#endif