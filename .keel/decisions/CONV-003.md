---
id: CONV-003
type: convention
title: Recursive tree operations returning updated root
status: accepted
source: ai-drafted
applies_to:
  - bst.c
  - bst.h
provenance:
  signals:
    - kind: file
      ref: bst.h
    - kind: file
      ref: bst.c
    - kind: file
      ref: test_bst.c
  model: claude-sonnet-4-6
  confidence: 0.98
---

## Context

Extracted by Keel's first-connect analysis of ThomasPritchard/BST from the files cited in provenance.

## Decision

All tree-modifying functions (insertNode, deleteNode, freeSubtree, balanceTree, reAdd) return a Node pointer so callers must reassign the root
