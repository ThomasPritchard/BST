---
id: CONV-002
type: convention
title: BST node structure with integer data
status: accepted
source: ai-drafted
applies_to:
  - bst.h
  - bst.c
provenance:
  signals:
    - kind: file
      ref: bst.h
    - kind: file
      ref: bst.c
  model: claude-sonnet-4-6
  confidence: 0.99
---

## Context

Extracted by Keel's first-connect analysis of ThomasPritchard/BST from the files cited in provenance.

## Decision

Tree nodes are defined as a struct with an int data field and left/right Node pointers
