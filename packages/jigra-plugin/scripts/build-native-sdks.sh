#!/bin/bash

cd ../android-js-engine
chmod +x ./gradlew
./gradlew clean
./gradlew :AndroidJSEngine:assemble
