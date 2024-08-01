# Change Log

## 1.1.0

### Minor Changes

- 2b11334: (iOS) KV: calling `get` on an non-existent key returns null instead of empty object
  (iOS) Fixed an issue within Runner that could potentially cause EXC_BAD_ACCESS crashes

### Patch Changes

- 2b11334: (iOS): Removing unnecessary run loop thread causing spike in CPU while the app was in the foreground

All notable changes to this project will be documented in this file.
See [Conventional Commits](https://conventionalcommits.org) for commit guidelines.
