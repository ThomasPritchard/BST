---
id: CONV-005
type: convention
title: Separation of library and test binary via Makefile targets
status: accepted
source: ai-drafted
applies_to:
  - Makefile
provenance:
  signals:
    - kind: file
      ref: Makefile
  model: claude-sonnet-4-6
  confidence: 0.95
---

## Context

Extracted by Keel's first-connect analysis of ThomasPritchard/BST from the files cited in provenance.

## Decision

The BST implementation is compiled as a separate object (bst.o via 'lib' target) and linked with the test binary separately
