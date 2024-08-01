module.exports = {
  ...require('@familyjs/swiftlint-config'),
  excluded: ['node_modules', 'ios/PluginTests/*', 'ios/Plugin/RunnerEngine/*'],
  disabled_rules: ['identifier_name'],
};
