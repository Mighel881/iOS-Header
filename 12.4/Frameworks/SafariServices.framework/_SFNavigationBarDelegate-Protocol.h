//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSItemProvider, NSURL, NSUUID, _SFNavigationBar, _SFNavigationIntent, _SFToolbar, _UIBackdropViewSettings;

@protocol _SFNavigationBarDelegate <NSObject>
- (void)navigationBarDidCreateToolbar:(_SFToolbar *)arg1;
- (void)navigationBarReaderButtonWasLongPressed:(_SFNavigationBar *)arg1;
- (void)navigationBarReaderAppearanceButtonWasTapped:(_SFNavigationBar *)arg1;
- (NSURL *)navigationBarURLForSharing:(_SFNavigationBar *)arg1;
- (void)navigationBarStopLoadingButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarStopLoadingButtonWasLongPressed:(_SFNavigationBar *)arg1;
- (void)navigationBarReloadButtonWasLongPressed:(_SFNavigationBar *)arg1;
- (void)navigationBarReloadButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarCancelButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarReaderButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarBackdropDidApplySettings:(_SFNavigationBar *)arg1;
- (void)compressedNavigationBarWasTapped:(_SFNavigationBar *)arg1;

@optional
- (NSUUID *)currentContentUUIDForNavigationBar:(_SFNavigationBar *)arg1;
- (long long)dataOwnerForNavigationBar:(_SFNavigationBar *)arg1;
- (NSItemProvider *)itemProviderForNavigationBar:(_SFNavigationBar *)arg1;
- (void)navigationBar:(_SFNavigationBar *)arg1 backDropWillApplySettings:(_UIBackdropViewSettings *)arg2;
- (void)navigationBar:(_SFNavigationBar *)arg1 didProduceNavigationIntent:(_SFNavigationIntent *)arg2;
- (void)navigationBarMediaCaptureMuteButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarDoneButtonWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarURLWasTapped:(_SFNavigationBar *)arg1;
- (void)navigationBarMetricsDidChange:(_SFNavigationBar *)arg1;
@end

