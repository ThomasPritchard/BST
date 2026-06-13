---
id: CONV-008
type: convention
title: Verbose diagnostic printf throughout BST operations
status: accepted
source: ai-drafted
applies_to:
  - bst.c
provenance:
  signals:
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

Every significant operation (insert, delete, traversal, free) prints a descriptive message to stdout indicating what action is being taken and on which value
