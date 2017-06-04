#ifndef __IPFS_DATASTORE_KEY_H__
#define __IPFS_DATASTORE_KEY_H__

/**
 * Constructs a new "clean" key. Will remove things like slashes
 * @param input the input
 * @param output the output
 * @param max_output_length the amount of memory allocated for output
 * @param actual_output_length the amount of bytes written to output
 * @returns true(1) on success
 */
int ipfs_datastore_key_new(const char* input, char* output, size_t max_output_length, size_t* actual_output_length);

#endif
