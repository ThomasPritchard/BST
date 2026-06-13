---
id: CONV-007
type: convention
title: pthread used for concurrent client simulation
status: accepted
source: ai-drafted
applies_to:
  - test_bst.c
  - serve_client.c
provenance:
  signals:
    - kind: file
      ref: test_bst.c
    - kind: file
      ref: serve_client.c
  model: claude-sonnet-4-6
  confidence: 0.96
---

## Context

Extracted by Keel's first-connect analysis of ThomasPritchard/BST from the files cited in provenance.

## Decision

Task 3 spawns multiple POSIX threads (one per client command file) using pthread_create and joins them with pthread_join
