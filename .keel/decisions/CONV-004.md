---
id: CONV-004
type: convention
title: In-order traversal for sorted output and balancing
status: accepted
source: ai-drafted
applies_to:
  - bst.c
provenance:
  signals:
    - kind: file
      ref: bst.c
  model: claude-sonnet-4-6
  confidence: 0.97
---

## Context

Extracted by Keel's first-connect analysis of ThomasPritchard/BST from the files cited in provenance.

## Decision

Tree traversal uses in-order (left, node, right) for both printing and collecting nodes into arrays for rebalancing
