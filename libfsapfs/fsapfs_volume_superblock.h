/*
 * The APFS volume superblock definition
 *
 * Copyright (C) 2018, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _FSAPFS_VOLUME_SUPERBLOCK_H )
#define _FSAPFS_VOLUME_SUPERBLOCK_H

#include <common.h>
#include <types.h>

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct fsapfs_volume_superblock fsapfs_volume_superblock_t;

struct fsapfs_volume_superblock
{
	/* The object checksum
	 * Consists of 8 bytes
	 */
	uint8_t object_checksum[ 8 ];

	/* The object identifier
	 * Consists of 8 bytes
	 */
	uint8_t object_identifier[ 8 ];

	/* The object transaction identifier
	 * Consists of 8 bytes
	 */
	uint8_t object_transaction_identifier[ 8 ];

	/* The object type
	 * Consists of 4 bytes
	 */
	uint8_t object_type[ 4 ];

	/* The object subtype
	 * Consists of 4 bytes
	 */
	uint8_t object_subtype[ 4 ];

	/* The file system signature
	 * Consists of 4 bytes
	 * Contains: "APSB"
	 */
	uint8_t signature[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown1[ 4 ];

	/* Compatible features flags
	 * Consists of 8 bytes
	 */
	uint8_t compatible_features_flags[ 8 ];

	/* Read only compatible features flags
	 * Consists of 8 bytes
	 */
	uint8_t read_only_compatible_features_flags[ 8 ];

	/* Incompatible features flags
	 * Consists of 8 bytes
	 */
	uint8_t incompatible_features_flags[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown5[ 8 ];

	/* The number of reserved blocks
	 * Consists of 8 bytes
	 */
	uint8_t number_of_reserved_blocks[ 8 ];

	/* The number of quota blocks
	 * Consists of 8 bytes
	 */
	uint8_t number_of_quota_blocks[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown8[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown9[ 8 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown10[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown11[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown12[ 4 ];

	/* The file system root tree object type
	 * Consists of 4 bytes
	 */
	uint8_t file_system_root_tree_object_type[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown14[ 4 ];

	/* The snapshot metadata tree object type
	 * Consists of 4 bytes
	 */
	uint8_t snapshot_metadata_tree_object_type[ 4 ];

	/* The object map block number
	 * Consists of 8 bytes
	 */
	uint8_t object_map_block_number[ 8 ];

	/* The file system root object identifier
	 * Consists of 8 bytes
	 */
	uint8_t file_system_root_object_identifier[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown18[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown19[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown20[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown21[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown22[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown23[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown24[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown25[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown26[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown27[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown28[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown29[ 8 ];

	/* The volume identifier
	 * Consists of 16 bytes
	 * Contains an UUID
	 */
	uint8_t volume_identifier[ 16 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown30[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown31[ 8 ];

	/* Unknown
	 * Consists of 32 bytes
	 */
	uint8_t unknown32[ 32 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown33[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown34[ 8 ];

	/* Unknown
	 * Consists of 32 bytes
	 */
	uint8_t unknown35[ 32 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown36[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown37[ 8 ];

	/* Unknown
	 * Consists of 32 bytes
	 */
	uint8_t unknown38[ 32 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown39[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown40[ 8 ];

	/* Unknown
	 * Consists of 32 bytes
	 */
	uint8_t unknown41[ 32 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown42[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown43[ 8 ];

	/* Unknown
	 * Consists of 32 bytes
	 */
	uint8_t unknown44[ 32 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown45[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown46[ 8 ];

	/* Unknown
	 * Consists of 32 bytes
	 */
	uint8_t unknown47[ 32 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown48[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown49[ 8 ];

	/* Unknown
	 * Consists of 32 bytes
	 */
	uint8_t unknown50[ 32 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown51[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown52[ 8 ];

	/* Unknown
	 * Consists of 32 bytes
	 */
	uint8_t unknown53[ 32 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown54[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown55[ 8 ];

	/* Unknown
	 * Consists of 32 bytes
	 */
	uint8_t unknown56[ 32 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown57[ 8 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown58[ 8 ];

	/* The volume name
	 * Consists of 256 bytes
	 */
	uint8_t volume_name[ 256 ];

	/* The next (available) document identifier
	 * Consists of 4 bytes
	 */
	uint8_t next_document_identifier[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown60[ 4 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown61[ 8 ];

	/* Unknown
	 * Consists of 32 bytes
	 */
	uint8_t unknown62[ 32 ];
};

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _FSAPFS_VOLUME_SUPERBLOCK_H ) */
