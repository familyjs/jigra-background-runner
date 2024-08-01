# android-js-engine

## 1.1.0

### Minor Changes

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
