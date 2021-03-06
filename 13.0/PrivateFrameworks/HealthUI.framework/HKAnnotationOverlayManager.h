//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKInteractiveChartViewObserver-Protocol.h>

@class HKAnnotationDisplayType, HKInteractiveChartViewController, NSString;

@interface HKAnnotationOverlayManager : NSObject <HKInteractiveChartViewObserver>
{
    HKInteractiveChartViewController *_chartViewController;
    HKAnnotationDisplayType *_currentOverlayDisplayType;
}

@property(retain, nonatomic) HKAnnotationDisplayType *currentOverlayDisplayType; // @synthesize currentOverlayDisplayType=_currentOverlayDisplayType;
@property(readonly, nonatomic) HKInteractiveChartViewController *chartViewController; // @synthesize chartViewController=_chartViewController;
- (void).cxx_destruct;
- (void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
- (void)removeAnnotationOverlay;
- (void)installAnnotationOverlayForRange:(id)arg1 trendData:(id)arg2;
- (void)dealloc;
- (id)initWithInteractiveChart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

