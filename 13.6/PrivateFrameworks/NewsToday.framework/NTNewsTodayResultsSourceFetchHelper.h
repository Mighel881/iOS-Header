//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface NTNewsTodayResultsSourceFetchHelper : NSObject
{
    NSMutableArray *_sectionQueueDescriptors;
    NSMutableDictionary *_remainingSectionsBySectionQueueDescriptors;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *remainingSectionsBySectionQueueDescriptors; // @synthesize remainingSectionsBySectionQueueDescriptors=_remainingSectionsBySectionQueueDescriptors;
@property(retain, nonatomic) NSMutableArray *sectionQueueDescriptors; // @synthesize sectionQueueDescriptors=_sectionQueueDescriptors;
- (void)removeSectionDescriptors:(id)arg1;
- (id)sectionDescriptorsAtHeadsOfQueues;
- (id)initWithSectionQueueDescriptors:(id)arg1;
- (id)init;

@end

