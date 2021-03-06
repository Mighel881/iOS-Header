//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoverSheet/CSWidgetGroupViewControllerProviding-Protocol.h>
#import <CoverSheet/WGWidgetDiscoveryControllerDelegate-Protocol.h>

@class NSString, WGWidgetDiscoveryController;

@interface CSTestingSupportWidgetProvider : NSObject <WGWidgetDiscoveryControllerDelegate, CSWidgetGroupViewControllerProviding>
{
    WGWidgetDiscoveryController *_widgetDiscoveryController;
}

- (void).cxx_destruct;
- (id)newWidgetGroupViewControllerWithSettings:(struct WGWidgetListSettings)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

