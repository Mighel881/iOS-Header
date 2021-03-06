//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PGTimeTitleUtility : NSObject
{
}

+ (id)_locationNodesForTimeTitleFromLocationNodes:(id)arg1;
+ (id)_significantDateNodesFromEventNodes:(id)arg1 dateFormatterType:(unsigned long long)arg2;
+ (id)_dateNodesFromEventNodes:(id)arg1 eventsStartDate:(id *)arg2 eventsEndDate:(id *)arg3;
+ (id)_commonLocationLabelForLocationNodes:(id)arg1;
+ (_Bool)_hasReachedNumberVisitsPerYear:(unsigned long long)arg1 inEvents:(id)arg2 withLocationNodes:(id)arg3 startDateNode:(id)arg4 endDateNode:(id)arg5;
+ (_Bool)_hasReachedNumberVisitsPerMonth:(unsigned long long)arg1 inEvents:(id)arg2 withLocationNodes:(id)arg3 startDateNode:(id)arg4 endDateNode:(id)arg5;
+ (void)_enumerateNeighborNodesOfEventNodes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (_Bool)_eventNodes:(id)arg1 coverCompleteTimeWithEdgeLabel:(id)arg2;
+ (_Bool)_eventNodesCoverCompleteYear:(id)arg1;
+ (_Bool)_eventNodesCoverCompleteMonth:(id)arg1;
+ (unsigned long long)_dateIntervalFormatterTypeWithEventNodes:(id)arg1 allowedFormats:(unsigned long long)arg2;
+ (_Bool)yearIsNeededForDisplayingDate:(id)arg1;
+ (_Bool)_yearIsNeededForDisplayingDate:(id)arg1;
+ (id)numberOfYearsAgoWithEventNodes:(id)arg1 relativeToDateComponents:(id)arg2 useOrdinal:(_Bool)arg3;
+ (id)_numberOfYearsAgoWithEventNodes:(id)arg1 relativeToDateComponents:(id)arg2;
+ (id)peopleTimeTitleWithEventNodes:(id)arg1;
+ (id)_splitTimeTitleWithLocalStartDate:(id)arg1 endDate:(id)arg2 startDateNode:(id)arg3 endDateNode:(id)arg4 allowedFormats:(unsigned long long)arg5 locale:(id)arg6;
+ (id)splitTimeTitleWithDateInterval:(id)arg1 allowedFormats:(unsigned long long)arg2;
+ (id)splitTimeTitleWithOptions:(id)arg1;
+ (id)timeTitleWithDateInterval:(id)arg1 allowedFormats:(unsigned long long)arg2;
+ (id)timeTitleWithOptions:(id)arg1;
+ (id)_loadRequirementForEventNodes:(id)arg1;

@end

