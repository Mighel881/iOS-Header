//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WDInteractiveChartViewObserver;

@interface WDInteractiveChartWeakObserverWrapper : NSObject
{
    id <WDInteractiveChartViewObserver> _observer;
}

@property(readonly, nonatomic) __weak id <WDInteractiveChartViewObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1;

@end

