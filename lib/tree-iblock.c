#include <stdint.h>
#include <stdarg.h>
#include "treap.h"
#include "stable.h"
#include "node-i.h"
#include "tree-i.h"

void
aff_tree_iblock(struct Block_s *block, int start)
{
    block->next = 0;
    block->start = start;
    block->used = 0;
}
