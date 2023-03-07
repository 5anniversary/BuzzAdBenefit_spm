// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "BuzzAdBenefit_spm",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "BuzzAdBenefit_spm",
            targets: [
                "BuzzAdBenefit"
            ]
        ),
        .library(
            name: "BuzzAdBenefit",
            targets: ["BuzzAdBenefit"]
        ),
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "BuzzAdBenefit",
            url: "https://storage.googleapis.com/buzzvil-client-app/bab-ios/6112/BuzzAdBenefit.zip",
            checksum: "c295b832b29152551074a16dd7d235df45dc902ec215043bd4f7da8a01b6503b"
        )
    ]
)
