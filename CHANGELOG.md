# Change Log

## 1.1.0

### Minor Changes

- 2b11334: (iOS) KV: calling `get` on an non-existent key returns null instead of empty object
  (iOS) Fixed an issue within Runner that could potentially cause EXC_BAD_ACCESS crashes
- 2b11334: More reliability fixes for the JS Engine used in the Background Runner:

  - (Android) Fixes in runtime during background execution
  - (Android) Improvements in native lib handling for testing

  When updating, if you have an existing Android app, be sure to delete the `android-js-engine-release.aar` from `android/src/main/libs`, and add the following to `android/app/build.gradle`:

  ```diff
  ...

  repositories {
      flatDir{
          dirs '../jigra-cordova-android-plugins/src/main/libs', 'libs'
  +		dirs '../../node_modules/@jigra/background-runner/android/src/main/libs', 'libs'
      }
  }
  ...

  ```

- 2b11334: (Android): Fixing issue that disabled `appStateChange` events
- 2b11334: Reliability fixes for the JS Engine used in the Background Runner:
  - (Android) Improvements to QuickJS integration
  - (Android / iOS) Improvements in the handling of multiple dispatched events

### Patch Changes

- 2b11334: Fixing incorrect method name in JigraGeolocation
- 2b11334: (iOS): Removing unnecessary run loop thread causing spike in CPU while the app was in the foreground
