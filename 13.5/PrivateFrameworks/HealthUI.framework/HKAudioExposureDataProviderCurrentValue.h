//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKDataProviderValue-Protocol.h>

@class HKQuantity, NSDate, NSString;

@interface HKAudioExposureDataProviderCurrentValue : NSObject <HKDataProviderValue>
{
    unsigned long long _classification;
    HKQuantity *_leqQuantity;
    double _secondsListened;
    long long _daysAggregated;
    NSDate *_date;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)_attributedSymbolForClassification:(unsigned long long)arg1 font:(id)arg2;
- (id)attributedSupplementaryStringWithDisplayType:(id)arg1 unitController:(id)arg2 font:(id)arg3;
- (id)stringWithDisplayType:(id)arg1 unitController:(id)arg2;
- (id)lastUpdatedShortDescriptionWithDateCache:(id)arg1;
- (id)lastUpdatedDescriptionWithDateCache:(id)arg1;
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)initWithLEQQuantity:(id)arg1 secondsListened:(double)arg2 daysAggregated:(long long)arg3 date:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

