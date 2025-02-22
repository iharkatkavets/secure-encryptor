/* convert_utils.c */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void uint8_to_hex(char *out_buf, uint8_t *in_buf, size_t buf_size) {
  for (size_t i=0; i<buf_size; i++) {
    sprintf(out_buf+(i*2), "%02x", in_buf[i]);
  }
  out_buf[buf_size*2] = '\0';
}
