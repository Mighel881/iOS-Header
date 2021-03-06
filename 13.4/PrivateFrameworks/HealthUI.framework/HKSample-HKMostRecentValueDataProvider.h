//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKSample.h>

#import <HealthUI/HKDataMetadataObject-Protocol.h>

@class NSDictionary;

@interface HKSample (HKMostRecentValueDataProvider) <HKDataMetadataObject>
- (id)dataProviderValue;
- (id)dataForSharingWithHealthStore:(id)arg1;
- (void)fetchSubSampleTypesWithHealthStore:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)detailedReportName;
- (id)subSampleSectionTitle;
- (id)subSamplePredicate;
- (id)fixedAggregateValuesWithDisplayTypeController:(id)arg1 unitController:(id)arg2;
- (id)hk_additionalMetadataSectionsWithHealthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;
- (void)addDetailValuesToSection:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSDictionary *metadata;
@end

