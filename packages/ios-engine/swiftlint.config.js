module.exports = {
  ...require("@familyjs/swiftlint-config"),
  excluded: ["node_modules", "Tests/*", ".build", ".swiftpm"],
  disabled_rules: [
    "identifier_name"
  ]
};
