//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSURL, SKUIIPadProductPageViewController, SKUIItem;

@protocol SKUIIPadProductPageDelegate <NSObject>

@optional
- (void)iPadProductPageCannotOpen:(SKUIIPadProductPageViewController *)arg1;
- (void)iPadProductPage:(SKUIIPadProductPageViewController *)arg1 openURL:(NSURL *)arg2 viewControllerBlock:(UIViewController * (^)(void))arg3;
- (void)iPadProductPage:(SKUIIPadProductPageViewController *)arg1 openItem:(SKUIItem *)arg2;
@end

