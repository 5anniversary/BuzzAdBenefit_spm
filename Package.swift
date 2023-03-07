// swift-tools-version: 5.6
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
                "BuzzAdBenefit",
                "BuzzAdBenefitNative",
                "BuzzAdBenefitInterstitial",
                "BuzzAdBenefitNative"
            ]
        ),
        .library(
            name: "BuzzAdBenefit",
            targets: ["BuzzAdBenefit"]
        ),
        .library(
            name: "BuzzAdBenefitNative",
            targets: ["BuzzAdBenefitNative"]
        ),
        .library(
            name: "BuzzAdBenefitInterstitial",
            targets: ["BuzzAdBenefitInterstitial"]
        ),
        .library(
            name: "BuzzAdBenefitNative",
            targets: ["BuzzAdBenefitNative"]
        )
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "BuzzAdBenefit",
            url: "https://storage.googleapis.com/buzzvil-client-app/bab-ios/5898/BuzzAdBenefit.zip",
            checksum: "acbe97c5f5959594da6597c5ebf56862c6cf43ea93866e1673aaa7615106c911"
        ),
        .binaryTarget(
            name: "BuzzAdBenefitNative",
            url: "https://storage.googleapis.com/buzzvil-client-app/bab-ios/5898/BuzzAdBenefitNative.zip",
            checksum: "9ed306f6554376dd2d75af8573f68c4267071cd44df0f5be24b57fa2c856ec47"
        ),
        .binaryTarget(
            name: "BuzzAdBenefitInterstitial",
            url: "https://storage.googleapis.com/buzzvil-client-app/bab-ios/5898/BuzzAdBenefitInterstitial.zip",
            checksum: "a3957f6aa67f31db3011fcb4a27ec5734f7022cf99b78da483dac76c750081bd"
        ),
        .binaryTarget(
            name: "BuzzAdBenefitFeed",
            url: "https://storage.googleapis.com/buzzvil-client-app/bab-ios/5898/BuzzAdBenefitFeed.zip",
            checksum: "6849328d369f5686e86aa8d01fd57cbd8e060ba630b4db355deb56fb7b918df7"
        )
    ]
)
