//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;

@interface RTVisitPipelineModuleStats : NSObject
{
    NSMutableDictionary *_iterationDurations;
    NSMutableDictionary *_iterationLocationCounts;
    NSMutableDictionary *_iterationLocationIntervals;
    NSMutableDictionary *_iterationMaxLocationOutageIntervals;
    NSMutableDictionary *_iterationVistCount;
    NSDate *_startDate;
}

- (void).cxx_destruct;
- (unsigned long long)maxVisitCountForDirection:(id)arg1;
- (unsigned long long)cumulativeVisitCountForDirection:(id)arg1;
- (unsigned long long)lastVisitCountForDirection:(id)arg1;
- (double)maxLocationOutageIntervalForDirection:(id)arg1;
- (double)cumulativeMaxLocationOutageIntervalForDirection:(id)arg1;
- (double)lastMaxLocationOutageIntervalForDirection:(id)arg1;
- (double)maxLocationIntervalForDirection:(id)arg1;
- (double)cumulativeLocationIntervalForDirection:(id)arg1;
- (double)lastLocationIntervalForDirection:(id)arg1;
- (unsigned long long)maxLocationCountForDirection:(id)arg1;
- (unsigned long long)cumulativeLocationCountForDirection:(id)arg1;
- (unsigned long long)lastLocationCountForDirection:(id)arg1;
- (unsigned long long)lastLocationCount;
- (double)maxProcessingDuration;
- (double)cumulativeProcessingDuration;
- (double)lastProcessingDuration;
- (void)stopIterationWithVisitClusters:(id)arg1;
- (void)startIterationWithVisitClusters:(id)arg1;
- (void)setVisitCountForVisitCluster:(id)arg1 direction:(id)arg2;
- (void)setMaxLocationOutageIntervalForVisitCluster:(id)arg1 direction:(id)arg2;
- (void)setLocationIntervalForVisitCluster:(id)arg1 direction:(id)arg2;
- (void)setLocationCountForVisitCluster:(id)arg1 direction:(id)arg2;
- (id)description;
- (id)init;

@end

